#include <iostream>
#include <string>
int main() {
  std::string i;
  std::cout << "Podaj hasło: ";
  std::getline(std::cin, i);
i == "student";
{
    while (i != "student") {
    std::cout << "Podaj hasło: ";
    std::getline(std::cin, i);
  }
  std::cout << "Poprawne hasło!" << "\n";
}
return 0;
}

