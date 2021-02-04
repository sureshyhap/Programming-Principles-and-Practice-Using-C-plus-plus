#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
  std::cout << "Enter an integer: ";
  int n = {};
  std::cin >> n;
  double n_double = n;
  std::cout << "n == " << n
	    << "\nn+1 == " << n + 1
	    << "\nn three times == " << 3 * n
	    << "\nn twice == " << n + n
	    << "\nn squared == " << n * n
	    << "\nhalf of n == " << n / 2
	    << "\nsquare root of n == " << sqrt(n_double)
	    << "\n";
  
  return 0;
}
