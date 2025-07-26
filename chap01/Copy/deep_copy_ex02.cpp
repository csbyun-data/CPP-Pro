class Person {
private:
  char* name;

public:
  Person(const char* pname) {
      name = new char[strlen(pname) + 1];
      strcpy(name, pname);
  }
  
  // 복사 생성자 (깊은 복사)
  Person(const Person& other) {
      name = new char[strlen(other.name) + 1];
      strcpy(name, other.name);
  }
  
  // 대입 연산자 오버로딩 (깊은 복사)
  Person& operator=(const Person& other) {
      if (this != &other) {
          delete[] name; // 기존 메모리 해제
          name = new char[strlen(other.name) + 1];
          strcpy(name, other.name);
      }
      return *this;
  }
  
  ~Person() {
      delete[] name;
  }
  
  void print() {
      cout << "Name: " << name << endl;
  }
};

int main() {
  Person p1("Alice");
  Person p2 = p1;  //복사 생성자 호출

  Person p3("Charlie");
  p3 = p1; //대입 연산자 호출

  return 0;
}
