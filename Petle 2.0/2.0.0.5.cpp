#include <iostream>
#include <string>
bool spr_czy_pierwsza(int n) {
    bool czy_pierwsza = true;
    if (n < 2) {
        czy_pierwsza = false;
    } else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                czy_pierwsza = false;
                break;
  }
 }
}
return czy_pierwsza;
}

auto ask_user_for_integer(std::string const prompt) -> int {
  
if (not prompt.empty()) {
    std::cout << prompt;
  }
  auto value = std::string{};
  std::getline(std::cin, value);
  return std::stoi(value);
}
auto main() -> int {
  do {
        int n = ask_user_for_integer("Podaj liczbę: ");

        bool  czy_pierwsza = spr_czy_pierwsza(n);

        if (czy_pierwsza) {
            std::cout << n << " jest liczbą pierwszą." << std::endl;
            int sum = 0;
            for (int x = 2; x <= n; x++) {
                bool czy_pierwsza = spr_czy_pierwsza(x);
                if (czy_pierwsza) {
                    sum = sum + x;
                }
            }
            std::cout << "Suma liczb pierwszych wynosi: " << sum << std::endl;
        } else {
            std::cout << n << " nie jest pierwszą liczbą." << std::endl;
        }
    } while (true);
return 0;
}
