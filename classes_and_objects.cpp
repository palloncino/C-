#include <iostream>
using namespace std;

class Person {
  public:
    int age;
    string name;
    void sayMyName() {
      cout << "Hi, my name is " << name << "\n";
    }
};

class Animal {
  public:
    string type;
    int weight;
    Animal(string t, int w) {
      type = t;
      weight = w;
    }
    void getInfo() {
      cout << "This is a " << type << " and weight around " << std::to_string(weight) << "kg." << "\n";
    }
};

int main() {
  
  // without constructor
  Person antonio;
  antonio.name = "Antonio";
  antonio.sayMyName();

  // with constructor
  Animal cat("mammal", 5);
  cat.getInfo();

  return 0;
};