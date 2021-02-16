#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter an operand, a number, and another number: ";
  char op = {};
  double operand1 = {}, operand2 = {};
  std::cin >> op >> operand1 >> operand2;
  double result = {};
  switch (op) {
  case '+':
    result = operand1 + operand2;
    break;
  case '-':
    result = operand1 - operand2;
    break;
  case '*':
    result = operand1 * operand2;
    break;
  case '/':
    result = operand1 / operand2;
    break;
  default:
    std::cout << "Unknown operator\n";
  }
  std::cout << operand1 << ' ' << op << ' ' << operand2 << " = " << result << '\n';
  return 0;
}
