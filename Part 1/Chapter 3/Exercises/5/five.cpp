#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter two integers: ";
  double val1 = {}, val2 = {};
  std::cin >> val1 >> val2;
  std::cout << "The smaller is: " << (val1 < val2 ? val1 : val2) << '\n';
  std::cout << "The larger is: " << (val1 > val2 ? val1 : val2) << '\n';
  std::cout << "The sum is: " << val1 + val2 << '\n';
  std::cout << "The difference is: " << val1 - val2 << '\n';
  std::cout << "The product is: " << val1 * val2 << '\n';
  std::cout << "The ratio is: "  << static_cast<double>(val1) / val2 << '\n';
  return 0;
}
