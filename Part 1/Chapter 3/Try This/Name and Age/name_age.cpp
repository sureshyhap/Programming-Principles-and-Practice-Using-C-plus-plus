#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "Enter your name and age: ";
  std::string name;
  double age = {};
  std::cin >> name >> age;
  std::cout << "Your name is " << name << " and you are " << age * 12 << " months old.\n";
  return 0;
}
