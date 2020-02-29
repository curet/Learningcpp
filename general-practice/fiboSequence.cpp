#include <iostream>
using namespace std;

int main()
{
double a =0, b=1, number, temp;

cout << "Enter the limit number: ";
cin >> number;

while(b <= number)
{
    cout << b << " ";
    temp = a;
    a=b;
    b = temp + b;
}
return 0;
}
