#include <array>
#include <iostream>

auto main() -> int {
  std::array<int, 8> tab;

  for (auto x = 1; x <= 8; x = x + 1) {
    tab[x - 1] = x * 2;
    std::cout << " " << tab.at(x - 1) << '\n';
  }
  return 0;
}
