#include <iostream>
#include <string>

auto main() -> int {
  auto x = 7;
  auto const y = -2;
  while (x >= y) {
    std::cout << "x = " << x << '\n';
    --x;
  }
  return 0;
}
