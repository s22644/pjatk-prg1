#include <iostream>
#include <string>
auto ask_user_for_integer(std::string const prompt) -> int {
  if (not prompt.empty()) {
    std::cout << prompt;
  }
  auto value = std::string{};
  std::getline(std::cin, value);
  return std::stoi(value);
}
auto main() -> int {
  auto const a = ask_user_for_integer("a = ");
  auto const b = ask_user_for_integer("b = ");
  auto const c = ask_user_for_integer("c = ");
  std::cout << "Największa liczba to: ";

  if (a > b && a > c) {
    std::cout << a << std::endl;
  } else if (b > a && b > c) {
    std::cout << b << std::endl;
  } else if (c > a && c > b) {
    std::cout << c << std::endl;
  }
  return 0;
}
