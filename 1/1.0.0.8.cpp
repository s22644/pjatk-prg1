#include <iostream>
#include <string>
auto ask_user_for_integer(std::string const prompt) -> int {
  if (not prompt.empty()) {
    std::cout << prompt;
  }
  auto value = std::string{};
  std::getline(std::cin, value);
  return std::stoi(value);
}
auto main() -> int {
  auto const a = ask_user_for_integer("a = ");
  auto const b = ask_user_for_integer("b = ");
  auto const c = ask_user_for_integer("c = ");
  
  if (a == c && b == c) {
    std::cout << "Wszystkie liczby są takie same." << std::endl;
  } else if (a == b && a < c) { //a=b<c
    std::cout << "Libczy a i b są takie same, a liczba " << c
              << " czyli c jest największa." << std::endl;
  } else if (a == b && a > c) { //a=b>c
    std::cout << "Libczy a i b są takie same i większe niż c." << std::endl;
  } else if (a == c && a < b) { //a=c<b
    std::cout << "Liczba a i c są takie same, a liczba " << b
              << " czyli b jest największa." << std::endl;
  } else if (a == c && a > b) { //a=c>b
    std::cout << "Liczba a i c są takie same i większe niż b." << std::endl;
  } else if (b == c && b < a) { //b=c<a
    std::cout << "Liczba b i c są takie same, a liczba " << a
              << " czyli a jest największa." << std::endl;
  } else if (b == c && b > a) { //b=c>a
    std::cout << "Liczba b i c są takie same i większe niż a." << std::endl;
  } else if (a > b && a > c) {
    std::cout << "Największa liczba to a = " << a << std::endl;
  } else if (b > a && b > c) {
    std::cout << "Największa liczba to b = " << b << std::endl;
  } else if (c > a && c > b) {
    std::cout << "Największa liczba to c = " << c << std::endl;
}  
return 0;
}
