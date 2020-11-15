#include <iostream>
using namespace std;
int main()
{
    int limit, x;
    cout << "Podaj wartość do odliczania: ";
    cin >> limit;
    for (x = limit; x; x=x-1)
        cout << "x = " << x << endl;
        cout << "Koniec bo x = " << x << endl;
return 0;
}
