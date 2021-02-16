#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter a number from 0 to 4 inclusive: ";
  int num = {};
  std::cin >> num;
  switch (num) {
  case 0:
    std::cout << "zero\n";
    break;
  case 1:
    std::cout << "one\n";
    break;
  case 2:
    std::cout << "two\n";
    break;
  case 3:
    std::cout << "three\n";
    break;
  case 4:
    std::cout << "four\n";
    break;
  default:
    std::cout << "not a number i know\n";
    break;
  }
  return 0;
}
