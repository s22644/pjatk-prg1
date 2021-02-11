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

  auto x = ask_user_for_integer("Podaj liczbę: ");
  auto i = 1;
  auto s = 1;
  do {
    s = s * i;
    ++i;
  } while (i <= x);

  std::cout << "Silnia liczby " << x << " to: " << s << std::endl;

  return 0;
}
