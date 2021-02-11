#include <iostream>
#include <string>
bool czy_pierwsza(int n) {
  if (n < 2){
    return false;
  }
  for (auto i = 2; i * i <= n; i++)
    if (n % i == 0){
      return false;
    }
  return true;
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
  auto n = ask_user_for_integer("Podaj liczbę: ");

  if (czy_pierwsza(n)){
    std::cout << "Liczba " << n << " jest pierwsza" << std::endl;
 }else{
    std::cout << "Liczba " << n << " nie jest pierwsza" << std::endl;
  }
  return 0;
}
