#include <iostream>

int main(int argc, char* argv[]) {
  int pennies = {}, nickels = {}, dimes = {}, quarters = {}, half_dollars = {}, one_dollars = {};
  std::cout << "How many pennies do you have? ";
  std::cin >> pennies;
  std::cout << "How many nickels do you have? ";
  std::cin >> nickels;
  std::cout << "How many dimes do you have? ";
  std::cin >> dimes;
  std::cout << "How many quarters do you have? ";
  std::cin >> quarters;
  std::cout << "How many half-dollars do you have? ";
  std::cin >> half_dollars;
  std::cout << "How many one-dollars do you have? ";
  std::cin >> one_dollars;
  double total =
    .01 * pennies + \
    .05 * nickels + \
    .10 * dimes + \
    .25 * quarters + \
    .50 * half_dollars + \
    1.00 * one_dollars;
  std::cout << "You have " << pennies << (pennies == 1 ? " penny" : " pennies") << ".\n";
  std::cout << "You have " << nickels << (nickels == 1 ? " nickel" : " nickels") << ".\n";
  std::cout << "You have " << dimes << (dimes == 1 ? " dime" : " dimes") << ".\n";
  std::cout << "You have " << quarters << (quarters == 1 ? " quarter" : " quarters") << ".\n";
  std::cout << "You have " << half_dollars << (half_dollars == 1 ? " half-dollar" : " half-dollars") << ".\n";
  std::cout << "You have " << one_dollars << (one_dollars == 1 ? " one-dollar" : " one-dollars") << ".\n";
  std::cout << "The value of all of your coins is $" << total << ".\n";
  return 0;
}
