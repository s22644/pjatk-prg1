#include <iostream>
#include <string>

auto swap(int *a, int *b)
{
    int pom = *a;
    *a = *b;
    *b = pom;
}

auto main() -> int{

    auto a = int{42};
    auto b = int{64};

    std::cout << a << " " << b << "\n";

    swap(&a , &b);

    std::cout << a << " "<< b << std::endl;

return 0;
}
