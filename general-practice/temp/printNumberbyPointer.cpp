// write a program to print a number and address which is entered from keyboard by the user
#include <iostream>
using namespace std;

int main(){

    int number;
    int *ptr;
    ptr = &number;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "Here is your number: " << *ptr << " and address: " << ptr << endl;

    return 0;
}