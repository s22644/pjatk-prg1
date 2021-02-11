#include <stdio.h>
#include <string.h>
#include <iostream>

//void* memset( void* s, int c, size_t n) -> void{


auto main() -> int{

    char string[] = "Hello World";
    memset(string, 'o', 6);
    std::cout << string << "\n";
}
