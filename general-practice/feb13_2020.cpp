// Working with mod

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "number % 2 = " << (number % 2) << endl;

    if(number % 2)
    {
      cout << "odd";
    }
    else
    {
      cout << "even";
    }
}
