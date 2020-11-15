#include <iostream>
using namespace std;
int main()
{
    string i;
    cout << "Podaj hasło: ";
    cin >> i;
    if (i == "student")
    {
        cout << "Poprawne hasło!" << endl;
    }
    else
    {
        cout << "Podaj hasło: ";
        cin >> i;
    }
    while(i != "student")
    {
        cout << "Podaj hasło: ";
        cin >> i;
    }
    cout << "Poprawne hasło!" << endl;
return 0;
}
