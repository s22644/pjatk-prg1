#include <iostream>
using namespace std;
int main()
{
int a, n;
    std::cout << "Sprawdź czy liczba jest podzielna przez 3 lub 5,\nWpisz wartość: ";
    std::cin >> n;
    if(n%15 == 0)
        std::cout << n << " Fizzbuzz";
    else if(n%3 == 0)
        std::cout << n << " Fizz";    
    else if(n%5 == 0)
        std::cout << n << " Buzz";
    else
        std::cout << "Liczba nie jest podzielna przez 3 ani 5";
return 0;
}
