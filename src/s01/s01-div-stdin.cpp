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
if(b==0){
    std::cout << "Nie dzielimy przez 0!!!\n";
}  
else
std::cout << "a / b = " << (a / b) << "\n";
  return 0;
}
