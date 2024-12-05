// Vrutual function 사용

class A {
  protected:
    int m_ix;
    int m_iy;
  public:
    virtual void Set(int a, int b) {
      m_ix = a;
      m_iy = b;
    }

    virtual void Move(int a, int b) {
      m_ix += a;
      m_iy += b;
    }
};

void main()
{
  A theApp;
}
