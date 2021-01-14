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
  auto const limit = ask_user_for_integer("limit = ");
  auto const dzielnik = ask_user_for_integer("dzielnik = ");
  int s = 0;
  for (auto i = 1; i <= limit && i % dzielnik == 0; ++i) {
    s = s + i;
  }
  std::cout << "= " << s << std::endl;
}
