#include <iostream>
using namespace std;

int main()
{
double k, fact=0;

cout << "Entre entero positivo: ";
cin >> fact;

while(fact < 0) {
    cout << "Entre número positivo";
    cin >> fact;
}
if(fact == 1 || fact == 0)
{
    fact = 1;
}
else {
    k = (fact -1);
    while (k >= 1) {
        fact = fact * k--;
    }
}    cout << fact;

return 0;
}
