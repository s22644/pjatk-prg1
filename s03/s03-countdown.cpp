#include <iostream>
auto main() -> int {
  int x;
  std::cout << "Podaj liczbę: ";
  std::cin >> x;
  for (auto y = x; y >= 0; --y) {
    std::cout << " " << y << "\n";
  }
  return 0;
}
