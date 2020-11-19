#include <iostream>
using namespace std;
int main()
{
    int a, x;
    cout << "Podaj wartość do odliczania: ";
    cin >> a;
    for (x = a; x; x=x-1){
        cout << "x = " << x << endl;
        cout << "Koniec bo x = " << x << endl;
    }
return 0;
}
