## Class 배열
### INDEX
* 1.class 배열 활용
    ```txt
    class c {
    public:
    	c()	{
    		a = 0;
    		strcpy(b, "");
    	}

    	set(int iVal, const char* pszVal) {
    		a = iVal;
    		strcpy(b, pszVal);
    	}
    	int a;
    	char b[10];
    }

    c a[10];
    c*p = a;

    // p->set(32, "every");
    a[0].set(32, "every");

    // (p+1)->set(12, "under");
    a[1].set(12, "under");

    // p += 2;
    // p->set(32, "show me the money");
    a[2].set(32, "show me the money");
    ```
 
* 2.C++, new, delete 사용
    ```txt
    1) 변수 사용
      int *p = new int;
      delete p;
  
    2) 배열 변수 사용
      int size = 10;
      int *ps = new int[size];
  
    // ps = NULL;  중요!, ps의 포인터를 상실하여 ps를 할당 메모리를 제거 하지 못함
      delete[] pa;
    // new, malloc 활용의 차이점 비교
    #include <iostream>
    #include <stdlib.h>
  
    using namespace std;
  
    class CTest
    {
    	public:
    		cTest() { cout << "Constructor \n"; }
    		virtual ~CTest() { cout << "Destructor \n"; }
    		void PrintMsg() { cout << "Hello World! \n"; }
    };
  
    int main()
    {
    	CTest* t1 = new CTest();
    	t1->PrintMsg();
    	delete t1;
  
    	cout << "\n";
    	CTest* t2 = (CTest*) malloc(sizeof(CTest));
    	t2->PrintMsg();
    	free(t2);
  
    	return 0;
    }
  
    // run result, malloc의 경우 destructor의 동작 되지 않음
    Hello World!
    Destructor
  
    Hello World!
    ```
    * 2.1 C, C++의 malloc() 함수 사용시 형변환 예
    ```c
    // C, C++의 malloc 활용의 차이점 비교
    // C 언어, 형변환을 자동으로 해줌
    int *ptr = malloc(sizeof(int));

    // C++언어, 형변환을 직접 지정해야함
    int *ptr = (int *)malloc(sizeof(int));
    ```
    
* 3.배열 메모리, heap영역의 메모리 할당, 제거
    ```txt
    1)  f() { int i[10]; }
      //heap 영역 제거 }를 만나면 제거 됨
      //함수의 local area {..} 벗어나도 배열이 제거되지 않게 하려면
      f() { static int i[10]; }

    2)  int *i = new int[10];
      // delete[] i; 제거

      int n = 10;
      int *i = new int[n];  // n이 상수가 아니어도 Error! 발생하지 않음 ?

    3)  int *i = (int *)malloc(sizeif(int[10]));
      // free(i); 제거
    ```
