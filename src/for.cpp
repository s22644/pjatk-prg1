#include <iostream>

auto main() -> int {
  for (auto x = 5; x >= -10; x--) {
    std::cout << "x = " << x << '\n';
  }
  return 0;
}
