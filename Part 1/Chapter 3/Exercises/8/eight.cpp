#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter an integer: ";
  int num = {};
  std::cin >> num;
  if (num % 2) {
    std::cout << "The value " << num << " is an odd number.\n";
  }
  else {
    std::cout << "The value " << num << " is an even number.\n";
  }
  return 0;
}
