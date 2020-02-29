#include <iostream>
using namespace std;

int main()
{
int entero;
cout << "Entre entero positivo: ";
cin >> entero;

while(entero <= 0)
{
    cout << "Entre entero > 0";
    cin >> entero;
}

cout << (entero * (entero + 1))/ 2;

return 0;
}
