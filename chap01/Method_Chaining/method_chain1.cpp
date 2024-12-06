// https://j2doll.tistory.com/773
// https://github.com/j2doll/method-chaining-cpp

#include <iostream>
#include <string>

class User {
public:
    User& setName(const std::string& name) {
        this->name = name;
        return *this;
    }

    User& setAge(int age) {
        this->age = age;
        return *this;
    }

    void print() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

protected:
    std::string name;
    int age;
};

int main() {
    User user;
    user.setName("Alice")
        .setAge(25)
        .print();

    return 0;
}
