## 1.상속(Inheritance)
### INDEX
* 1.상속(inheritance), Reuse
  ```
  class Animal {
  public:
    void eat() { cout << "Eating.." << endl;}
  };
  
  class Dog : public Animal {
  public:
    void bark() { cout << "Barking.." << endl;}
  };
  ```
* 접근 지정자(Access Specifiers)  
  ![image](https://github.com/user-attachments/assets/faf8b991-8f23-4888-af6b-1023cf279ff5)
  * 1.1 private [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Inheritance/Inheritance_Private.cpp)
  * 1.2 protected [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Inheritance/Inheritance_Protected.cpp)  
    ![image](https://github.com/user-attachments/assets/55fd1137-c9f4-46b4-9934-e563295b6b97)

