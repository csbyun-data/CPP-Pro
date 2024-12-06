class My
{
  public:
    static int a; //static meber variable
  public:
    My() { a++; }
    static void Draw()
    { printf(%d\n", a); }
};

int My::a = 0; //initialize

void main()
{
  My.Draw();  //객체생성없이 사용Ok, class_Name::Draw()로 활용
}
