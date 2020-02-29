#include <iostream>
using namespace std;
int main()
{
int a, b, r;

cout << "Entre dos numeros positivos: ";
cin >> a >> b;
while(a <=0 || b <= 0)
{
    cout << "Numeros deben ser mayor a 0";
    cin >> a >> b;
}
r = a%b;
while(r)
{
    a=b;
    b=r;
    r=a%b;
}
cout << b;

return 0;

}
