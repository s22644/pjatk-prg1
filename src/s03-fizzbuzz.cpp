#include <iostream>

int main() {
  int limit;
  std::cout
      << "Sprawdź czy liczba jest podzielna przez 3 lub 5,\nWpisz wartość: ";
  std::cin >> limit;
    for (int i = 1; i <= limit; i++) {
        if (i % 15 == 0) { 
            std::cout << i << " FizzBuzz";
        }else if (i % 3 == 0) {
            std::cout << i << " Fizz";
        }else if (i % 5 == 0) {
            std::cout << i << " Buzz";
        }else {
            std::cout << "Liczba nie jest podzielna przez 3 ani 5";
        }
}      
return 0;
}
