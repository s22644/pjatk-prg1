#include <cstdlib>
#include <iostream>
#include <string>
#include <time.h>

auto main() -> int {
  srand(time(NULL));
  auto x = (std::rand() % 100);
  int y;
  std::cout << "Podaj liczbe od 1 do 100:\n";
  std::cin >> y;

  do {

    if (y > x) {
      std::cout << "Za dużo. Sprobuj jeszcze raz!" << std::endl;
      std::cin >> y;
    } else if (y < x) {
      std::cout << "Za mało. Sprobuj jeszcze raz!" << std::endl;
      std::cin >> y;
    }
  } while (y != x);
  std::cout << "Brawo zgadles!!!" << std::endl;
  return 0;
}
