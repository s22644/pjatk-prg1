#include <iostream>
#include <string>

auto ask_user_for_integer ( std :: string const prompt ) -> int{

    if (not prompt.empty ()){
        
        std :: cout << prompt ;
    }
    
    auto value = std :: string {};
    std :: getline ( std :: cin , value );
    return std :: stoi ( value );
}

auto aiota(int a[], int n, int start) -> void{

    auto n = ask_user_for_integer("n =");
    auto start = ask_user_for_integer("start =");

char a[n]={};
aiota (a,n);
a[0]=start;
return 0;
}

