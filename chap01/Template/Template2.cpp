//자료형 T1, T2로 2개를 사용하는 예
#include <stdio.h>
template<class T1, class T2>
class CAdd
{
  public:
    T2 Add(T1 a, T1 b)
    {
       T2 sum = a + b;
      return sum;
    }
};

void main()
{
  CAdd<int, double> a;
  printf("%d \n", a.Add(2, 3));
}
