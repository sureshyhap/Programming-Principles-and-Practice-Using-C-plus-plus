#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter a number of miles: ";
  double miles = {};
  std::cin >> miles;
  std::cout << miles << " miles = " << miles * 1.609 << " kilometers.\n";
  return 0;
}
