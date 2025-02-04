### Applied C++
* INDEX
  * Contents 
  ```txt
  Applied C++: Practical Techniques for Building Better Software 
  By Philip Romanik, Amy Muntz 
   
  Chapter 1.  Introduction 
    Section 1.1.  Imaging Basics 
    Section 1.2.  Summary 
  
  Chapter 2.  A Test Application 
    Section 2.1.  Image Class Design 
    Section 2.2.  Thumbnail Class 
    Section 2.3.  Implementation 
    Section 2.4.  Summary 
  
  Chapter 3.  Design Techniques 
    Section 3.1.  Memory Allocation 
    Section 3.2.  Prototyping 
    Section 3.3.  Summary 
  
  Chapter 4.  Design Considerations 
    Section 4.1.  Coding Guidelines 
    Section 4.2.  Reusable Code 
    Section 4.3.  Designing in Debugging Support 
    Section 4.4.  Summary 
  
  Chapter 5.  System Considerations 
    Section 5.1.  Multithreaded and Multiprocess Designs 
    Section 5.2.  Exception Handling 
    Section 5.3.  Compile-Time Versus Run-Time Issues 
    Section 5.4.  Coding for Internationalization 
    Section 5.5.  Summary 
  
  Chapter 6.  Implementation Considerations 
    Section 6.1.  Finalizing the Image Components 
    Section 6.2.  Finalizing the Image Class 
    Section 6.3.  Adding Global Image Functions 
    Section 6.4.  Finalizing Interfaces to Third-Party Software 
    Section 6.5.  Summary 
  
  Chapter 7.  Testing and Performance 
    Section 7.1.  Unit Tests 
    Section 7.2.  Performance Tuning 
    Section 7.3.  Summary 
  
  Chapter 8.  Advanced Topics 
    Section 8.1.  Memory Issues 
    Section 8.2.  Language Construct Issues 
    Section 8.3.  Extending the Framework 
    Section 8.4.  Summary 
  
  Appendix A.  Useful Online Resources 
    Section A.1.  Software 
    Section A.2.  Standards 
  
  Appendix B.  CD-ROM Information 
    Section B.1.  Contents 
    Section B.2.  Framework 
    Section B.3.  Prototypes 
    Section B.4.  Utilities 
    Section B.5.  Delegates 
  
  Bibliography 
  ```
* Chap7  Testing and Performance
  * Unit Test Framework [unitTest.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/unitTest.h), [unitTest.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/unitTest.cpp)  
  ```c
  // macro에서 class 소스를 만들고, 컴파일 후 실행 시 class을 생성자 addTest 매소드를 실행함
  // in unitTest.h contents
  #define UTFUNC(utx)                            \
  class UT##utx : public apUnitTestFunction      \
  {                                              \
  UT##utx ();                                    \
  static UT##utx sInstance;                      \
  void test ();                                  \
  };                                             \
  UT##utx UT##utx::sInstance;                    \
  UT##utx::UT##utx () : apUnitTestFunction(#utx) \
  {                                              \
    apUnitTest::gOnly().addTest(#utx,this);      \
  }                                              \
  void UT##utx::test ()
  
  #define VERIFY(condition) verify (condition, #condition)
  #define VERIFYFLOAT(d1,d2) verifyFloat (d1, d2)
  
  #endif // _unittest_h_
  ```
  ![image](https://github.com/user-attachments/assets/1c8537b1-c0db-4fef-90ba-c137b36c45e2)

  * complete apUnitFunction 
  ```c
  class apUnitTestFunction
  {
  public:
    apUnitTestFunction (const std::string& name);
  
    enum eResult {eNotRun, eRunning, eUnknown, eSuccess, eFailure};
  
    const std::string& name         () const { return name_;}
    eResult            result       () const { return result_;}
    double             elapsed      () const { return elapsed_;}
    const std::string& message      () const { return message_;}
    const std::string& description  () const
    { return description_;}
    std::string        resultString () const;
  
    void setDescription (const std::string& s) { description_ = s;}
  
    void run (bool verbose = false);
    // Run this unit test. Called by the unit test framework
  protected:
    virtual void test() = 0;
    // All unit tests define this function to perform a single test
  
    bool verify (bool state, const std::string& message="");
    // Fails test if state is false. Used by VERIFY() macro
  
    void addMessage (const std::string& message);
    // Adds the message string to our messages
  
    bool         verbose_;     // true for verbose output
  
    eResult      result_;      // Result of this unit test
    std::string  name_;        // Unit test name (must be unique)
    std::string  description_; // Description of function
    std::string  message_;     // Message, usual a failure message
    double       elapsed_;     // Execution time, in seconds
  };
  ```

  * implementation of the run() method
  ```c
  void apUnitTestFunction::run ()
  {
    std::string error;
  
    apElapsedTime time;
    try {
      test ();
    }
    catch (const std::exception& ex) {
      // We caught an STL exception
      error = std::string("Exception '") + ex.what() + "' caught";
      addMessage (error);
      result_ = eFailure;
    }
    catch (...) {
      // We caught an unknown exception
      error = "Unknown exception caught";
      addMessage (error);
      result_ = eFailure;
    }
    elapsed_ = time.sec ();
  
    // Make sure the test() function set a result or set eUnknown
    if (result_ != eSuccess && result_ != eFailure)
      result_ = eUnknown;
  }
  ```

  * unit test framework
  ```c
  class apUnitTest
  {
  public:
    static apUnitTest& gOnly ();
  
    bool run (bool verbose = false);
    // Run all the unit tests. Returns true if all tests are ok
  
    void dumpResults (std::ostream& out);
    // Dump results to specified stream
  
    int size () const { return static_cast<int>(tests_.size());}
    const apUnitTestFunction* retrieve (int index) const;
    // Retrieves the specific test, or NULL if invalid index
  
    void addTest (const std::string& name,
                  apUnitTestFunction* test);
    // Used by our macro to add another unit test
  
  private:
    apUnitTest ();
    static apUnitTest* sOnly_;  // Points to our only instance
  
    std::vector<apUnitTestFunction*> tests_; // Array of tests
  };
  ```
  ```c
  bool apUnitTest::run ()
  {
    bool state = true;
  
    for (unsigned int i=0; i<tests_.size(); i++) {
      apUnitTestFunction* test = tests_[i];
      test->run ();
      if (test->result() != apUnitTestFunction::eSuccess)
        state = false;
    }
    return state;
  }
  ```
  
  * [bstring.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/bstring.h), [bstring.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/bstring.cpp), [geometry.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/geometry.h), [geometry.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/geometry.cpp), [main.cpp](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/main.cpp), [timing.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/timing.h), [timing.h](https://github.com/csbyun-data/CPP-Pro/blob/main/chap06/Applied_Cpp/Chap07/timing.cpp)
  
  

