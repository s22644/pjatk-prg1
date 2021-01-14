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
  auto const x = ask_user_for_integer("x = ");
  auto const y = ask_user_for_integer("y = ");
  if (x > y) {
    std::cout << x << ">" << y << std::endl;
  } else if (x < y) {
    std::cout << x << ">" << y << std::endl;
  } else if (x == y) {
    std::cout << x << "=" << y << std::endl;
  }
  return 0;
}
