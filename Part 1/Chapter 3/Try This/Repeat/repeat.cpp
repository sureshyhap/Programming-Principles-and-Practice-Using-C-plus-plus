#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::string previous = {" "}, current;
  int num_repeated = {0};
  while (std::cin >> current) {
    if (previous == current) {
      std::cout << "Repeated word: " << current << '\n';
      ++num_repeated;
    }
    previous = current;
  }
  std::cout << "There were " << num_repeated << " repeated words (not including the first instance of the word.)\n";
  return 0;
}
