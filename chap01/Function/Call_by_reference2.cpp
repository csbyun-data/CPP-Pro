// Reference Variable 처리
  int a;
  int &b = a;

// function 처리
void Ref(int &b) {}  //2. 처리

void main()
{
  int a = 2;
  Ref(a);  //1. int &b = a;
}
