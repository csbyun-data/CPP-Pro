### Reference 
* Reference
  *  Variable [[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_var.c)]
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
  
  *  declare reference [[code](https://github.com/csbyun-data/CPP-Pro/blob/main/chap01/Ref/ref_arr.c)]
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
  
  * declare pointer variable reference  [[code]()]
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
