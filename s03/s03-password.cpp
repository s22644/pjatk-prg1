#include <iostream>
#include <string>

auto main() -> int {

  auto ph = std::string{};
  auto h = std::string{};
  std::cout << "Podaj swoje hasło: ";
  std::getline(std::cin, h);

  do {
    std::cout << "Hasło: ";
    std::getline(std::cin, ph);

  } while (ph != h);
  std::cout << "Poprawne hasło!!!\n";

  return 0;
}
