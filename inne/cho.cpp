#include <iostream>

auto main() -> int {
  for (auto i = 1; i <= 4; i++) {
    for (auto j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << '\n';
  }
  return 0;
}
