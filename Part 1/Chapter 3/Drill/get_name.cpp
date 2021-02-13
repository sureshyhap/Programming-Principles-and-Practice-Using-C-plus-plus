#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "Enter your first name: ";
  std::string first_name;
  std::cin >> first_name;
  std::cout << "Hello " << first_name << '\n';
  std::cout << "Enter the name of the person you want to write to: ";
  std::string to_first_name;
  std::cin >> to_first_name;
  std::cout << "Dear " << to_first_name << ", \n";
  std::cout << "\tHow are you? I am fine. I miss you!\n";
  std::cout << "Enter a name of a friend: ";
  std::string friend_name;
  std::cin >> friend_name;
  std::cout << "Have you seen " << friend_name << " lately?\n";
  std::cout << "Enter m if your friend is male or f if they are female: ";
  char friend_sex = {};
  std::cin >> friend_sex;
  std::cout << "If you see " << friend_name << ", ask ";
  if (friend_sex == 'm') {
    std::cout << "him to call me.\n";
  }
  else if (friend_sex == 'f') {
    std::cout << "her to call me.\n";
  }
  std::cout << "How old are you? ";
  int age = {};
  std::cin >> age;
  std::cout << "I hear you just had a birthday and you are " << age << " years old.\n";
  if (age < 0 or age > 110) {
    std::cout << "You must be kidding!\n";
    return 0;
  }
  if (age < 12) {
    std::cout << "Next year you will be " << age + 1 << ".\n";
  }
  else if (age == 17) {
    std::cout << "Next year you will be able to vote.\n";
  }
  else if (age > 70) {
    std::cout << "I hope you are enjoying retirement.\n";
  }
  std::cout << "Yours sincerely\n\n\nSuresh Yhap\n";
  return 0;
}
