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
  auto a = ask_user_for_integer("a = ");
  if (a >= 3) {
    for (auto i = 0; i < a - 1; ++i) { // górna krawędź
      std::cout << "*";
    }
    std::cout << "*" << std::endl;

    for (auto i = 0; i < a - 1; ++i) { //środek
      std::cout << "*";
      for (auto j = 0; j < a - 2; j++) {
        std::cout << " ";
      }
      std::cout << "*" << std::endl;
    }
    for (auto i = 0; i < a - 1; ++i) // dolna krawędź
    {
      std::cout << "*";
    }
    std::cout << "*" << std::endl;
  } else {
    std::cout << "a nie może być mniejsze od 3!!!" << std::endl;
  }
  return 0;
}
