class A
{
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

class B: publuc A
{
  public:
    void Move(int a, int b) {
      m_ix += a*2;
      m_iy += b*2;
    }
    void Reset() {
      m_ix = 0;
      m_iy = 0;
    }
};

void main()
{
  A theApp;
  B theApp2;
}
