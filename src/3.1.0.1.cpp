#include <iostream>

auto init(int a[], int n) -> void {
  std::cout << "n = " << n << std::endl;
  a[n] = '0';
}
