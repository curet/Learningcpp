#include <iostream>
using namespace std;

int main()
{
double R, C, A, V;
double pi = 3.14159;

cout << "Entre el radio del circulo: ";
cin >> R;

cout << fixed << showpoint << setprecision(4);
cout << "\nR=" << R;
cout << "\nC=" << pi * (2 * R);
cout << "\nA=" << pi * (R * R);
cout << "\nV=" << (4./3) * pi * (R * R * R);

return 0;

}
