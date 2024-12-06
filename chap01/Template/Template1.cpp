//자료형을 T로 1개 사용하는 예
template <class T>
class CRect {
  private:
    T height, width;
  public:
    CRect() {}
    T Area() { 
       return height*width;
    }
    SetH(T a) { height = a; }
    SetW(T a) { width = a;}
}

void main()
{
  int ret;
  CRect<int> rect;
  rect.SetH(1);
  rect.SetW(2);
  ret = rect.Area();
  printf("%d\n", ret);
}
