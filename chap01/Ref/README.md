### Reference 
* Reference
  *  Variable [code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_var.c)
  ```cpp
  // 윤성우의 C++ Chap 2-3
  int main(void) {
    int num1 = 100;
    int &num2 = num1;
  
    cout << "Value: " << num1 << endl;
    cout << "Ref  : " << num2 << endl;
    cout << "Value: " << &num1 << endl;
    cout << "Ref  : " << &num2 << endl;
  
    return 0;
  }
  ```
  <img width="346" height="101" alt="image" src="https://github.com/user-attachments/assets/77c66dd1-3057-4188-b561-3b87055494bf" />
  
  *  define reference [code]()
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
  
