#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand ((int) time(NULL));
int x, y;
x=rand()%100+1;

    cout << "Zgadnij liczbę w przedziale od 1 do 100: ";
    cin >> y;
    while(y!=x){
    
    if(y<x){
        cout << "Za mało, spróbuj ponownie: ";
        cin >> y;
    }
    else {
        cout << "Za dużo, spróbuj ponownie: ";
        cin >> y;
    }
}
    cout << "Brawo zgadłeś!!!;
return 0;
} 
