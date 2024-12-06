class CPoint 
{
  private:
    int m_iX;
    int m_iY;
  public:
    void Set(int x, int y)
    { m_iX = x;
      m_iY = y;
    }
    void Draw() const    //Draw함수가 Member Variable을 변경 불가
    {
      m_iX = 2; //Error
      printf("%d, %d", m_iX, m_iY);
    }
};
