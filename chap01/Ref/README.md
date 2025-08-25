### Reference 
* Reference and Function
  *  Variable [[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_var.cpp)]
  ```cpp
  // 윤성우의 C++ Chap 2-3
  int main(void) {
    int num1 = 100;
    int &num2 = num1;
    int &num3 = num2;

    return 0;
  }
  ```
  <img width="346" height="101" alt="image" src="https://github.com/user-attachments/assets/77c66dd1-3057-4188-b561-3b87055494bf" />
  
  *  declare reference [[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_arr.cpp)]
  ```cpp
  int main(void) {
    int arr[3]={ 1, 3, 5};
    int &ref1=arr[0];
    int &ref2=arr[1];
    int &ref3=arr[2];

    cout << ref1 << endl;
    cout << ref2 << endl;
    cout << ref3 << endl;

    return 0;
  }
  ```
  <img width="347" height="86" alt="image" src="https://github.com/user-attachments/assets/9cad92e3-8eea-4c20-8ddb-664f40fff9bb" />
  
  * declare pointer variable reference  [[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_ptr.cpp)]
  ```
  int main(void) {
    int num=12;
    int *ptr=&num;
    int **dptr=&ptr;

    int &ref=num;
    int *(&pref)=ptr;
    int **(&dpref)=dptr;

    cout << ref << endl;
    cout << *pref << endl;
    cout << **dpref << endl;

    return 0;
  }
  ```
  <img width="350" height="90" alt="image" src="https://github.com/user-attachments/assets/a5ea6084-47d5-43a8-848d-27fbb5cbf4df" />
* Reference Argument Function
  * Call by reference [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/call_by_ref.cpp)
  ```cpp
  // 윤성우 열혈강의 C++ 2-4
  void swap( int &ref1, int &ref2) { }
  
  int main(void) {
    int val1 = 10;
    int val2 = 20;
    swap( val1, val2);
  }
  ```
  * retrun reference [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/RefRetFuncOne.cpp), [code1](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/RefRetFuncOne1.cpp)
  ```
  int & RefReturnFunctionOne( int &ref) {
  	ref++;
  	return ref;
  }
  
  int main(int argc, char** argv) {
  
  	int num1 = 1;
  	int &num2 = RefReturnFunctionOne(num1);
  }
  ```
  ```
  int & RefReturnFunctionOne( int &ref) {
  	ref++;
  	return ref;
  }
  
  int main(int argc, char** argv) {
  
  	int num1 = 1;
  	int num2 = RefReturnFunctionOne(num1);
  }  
  ```
  ```
  반환형이 참조형 인 경우
  int num2 = RefRetFuncOne( num1); // O
  int &num2 = RefReturnOne( num1); // O

  반환형이 값의 형태인 경우
  int num2 = RefRetFuncOne( num1); // O
  int &num2 = RefReturnOne( num1); // X

  // 지역변수가 소멸되어 참조대상이 사라짐
  int & RetRefFunc( int n ) {
    int num = 20;
    num += n;
    return num;
  }

  int &ref = RetuRefFunc(10); 
  ```
