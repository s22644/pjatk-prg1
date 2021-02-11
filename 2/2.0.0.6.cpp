#include <iostream>
#include <string>

auto ask_user_for_integer(std::string const prompt) -> int
{
if (not prompt.empty()) {
    std::cout << prompt;
}
    auto value = std::string{};
    std::getline(std::cin, value);
    return std::stoi(value);
}
void relacje(int x, int y)
{
if (x > y) {
    std::cout << x << " > " << y << std::endl;
} 
    else if (x < y) {
        std::cout << x << " < " << y << std::endl;
} 
else if (x == y) {
        std::cout << x << " = " << y << std::endl;
 }
}
auto main() -> int
{
    int y;
    int tab[10];

    auto const n = ask_user_for_integer("Podaj liczbe porownywanych liczb: ");
    auto const x = ask_user_for_integer("Podaj liczbe do porownania: ");


for (int i = 0; i < n; i++) {
    y = ask_user_for_integer("Podaj inne liczby:");
    tab[i] = y;
}

for (int i = 0; i < n; i++) {
    y = tab[i];
    relacje(x, y);
}
    return 0;
}
