#include <iostream>
int main() {
  auto a = int{};
  auto x = int{};

  for (auto x = a; x; --x) {
    
    std::cout << " " << a;
    std::cout << " " << x << "\n";
  }
    std::cout << " " << x << "\n";
    
return 0;
}
