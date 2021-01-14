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
  auto const d = ask_user_for_integer("d = ");
  auto const e = ask_user_for_integer("e = ");
  auto const f = ask_user_for_integer("f = ");
  auto y;

  if (a > y) {
    std::cout << a << ">" << y << std::endl;
  } else if (a < y) {
    std::cout << a << ">" << y << std::endl;
  } else if (a == y) {
    std::cout << a << "=" << y << std::endl;
  }

  return 0;
}
