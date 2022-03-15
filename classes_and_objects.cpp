#include <iostream>
using namespace std;

class Person {
  public:
    int age;
    string name;
};

int main() {
  Person Antonio;
  Antonio.age = 26;
  Antonio.name = "Antonio";
  cout << Antonio.name;
  return 0;
};