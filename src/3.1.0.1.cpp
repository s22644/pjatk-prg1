#include <iostream>

int main (){

auto init (int a [], int n) -> void {
a[n]= {};

std::cout << "Wpisz rozmiar tablicy: " << n << std::endl;   
std::cout << "Wartości tablicy to:" <<  std::endl;
    for ( int i=0; i<n; i++){
        std::cout << a[i] << " ";
}
std::cout<<std::endl;
}
return 0;
}
