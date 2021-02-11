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
  for (auto i = 1; i <= a; i++) {
    for (auto j = 1; j <= b; j++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
  return 0;
}
