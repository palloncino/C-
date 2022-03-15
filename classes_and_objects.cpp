#include <iostream>
using namespace std;

class Person {
  public:
    int age;
    string name;
    void sayMyName() {
      cout << "Hi, my name is " + name;
    }
};

int main() {
  Person Antonio;
  Antonio.name = "Antonio";
  Antonio.sayMyName();
  return 0;
};