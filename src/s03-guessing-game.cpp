#include <iostream>
#include <string>
#include <random>
int main() {
    
    std::string x;
    std::random_device rd;
    std::uniform_int_distribution<int> d100 (1, 100);

    auto const x = d100(rd);

  std::cout << "Zgadnij liczbę w przedziale od 1 do 100: ";
  std::getline (std::cin, x);

    while (y != x) {

    if (y < x) 
        std::cout << "Za mało" '\n';
        std::getline (std::cin, x);
        
    else if (y > x)
        std::cout << "Za dużo"'\n';
        std::getline (std::cin, x);
    }
    std::cout << "Zgadłeś, brawo!"'\n';
return 0;
} 
