//MFC library 사용 Template
//MFC사용, 공유DLL 사용 설정
#include <afxtempl.h>
void main()
{
  CList<int, int> a;
  a.AddTail(20);
  a.AddTail(20);

  POSITION pos = a.GetHeadPosition();
  for(int i=0; i < a.GetCount(); i++)
  {
    printf("%d\n", a.GetNext(pos));
  }
}
