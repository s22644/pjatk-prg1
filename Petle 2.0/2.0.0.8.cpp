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
  int s = 1;
  auto x = ask_user_for_integer("Podaj liczbę: ");
  for (auto i = 1; i <= x; i++) {
    s = s * i;
  }
  std::cout << "Silnia liczby " << x << " to: " << s << std::endl;

  return 0;
}
