#include <iostream>

int main(int argc, char* argv[]) {
  int a = {}, b = {}, c = {};
  std::cout << "Enter three integers: ";
  std::cin >> a >> b >> c;
  int smallest = {}, middle = {}, largest = {};
  if (a <= b) {
    if (b <= c) {
      smallest = {a};
      middle = {b};
      largest = {c};
    }
    else if (a <= c) {
      smallest = {a};
      middle = {c};
      largest = {b};
    }
    else if (a > c) {
      smallest = {c};
      middle = {a};
      largest = {b};      
    }
  }
  else {
    if (a <= c) {
      smallest = {b};
      middle = {a};
      largest = {c};
    }
    else if (b <= c) {
      smallest = {b};
      middle = {c};
      largest = {a};
    }
    else if (b > c) {
      smallest = {c};
      middle = {b};
      largest = {a};
    }
  }
  std::cout << smallest << ", " << middle << ", " << largest << '\n';
  return 0;
}
