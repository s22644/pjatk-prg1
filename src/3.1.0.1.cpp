#include <iostream>
#include <string>

auto init(int a[], int n) -> void {
    
    for (auto i = 0; i < n ; i++){
        std::cout << a[i] << " ";
    }
    
    std::cout << std::endl;
}
int main (){
    
    const int n = 10 ;
    int a[n]= {};
    init (a, n);
    return 0;
}
