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
auto main() -> int auto const x = ask_user_for_integer("x = ") << std::endl;
auto const y = ask_user_for_integer("y = ") << std::endl;
if (x > y) {
  std::cout << x << ">" >> y << std::endl;
}
if
  else(x < y) {
    std::cout << x << ">" >> y << std::endl;
  }
if
  else(x == y) {
    std::cout << x << "=" >> y << std::endl;
  }
return 0;
}
