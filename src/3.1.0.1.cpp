#include <iostream>
#include <string>

auto init(int a[], int n) -> void {
    for (auto i = 0; i < n ; i++){
        std::cout << a[i] << " " ;
    }
    std::cout << std::endl;
}
auto main () -> int{
    int n;
    std::cin >> n;
    int a[n]= {};
    init (a, n);
    return 0;
}
