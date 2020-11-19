#include <iostream>
using namespace std;
int main() {

int n=99;

    while(n>0)
    {
        std::cout << n;
        std::cout << " bottles of pop on the wall.\nTake one down and pass it around.\n";
        std::cout << --n << " bottles of pop on the wall.\n\n";
    }
        std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
        std::cout << "Got to the store and buy some more, 99 bottles of beer on the wall...\n";
return 0;
}
