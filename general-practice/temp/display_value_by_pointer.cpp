// Take input in variable and display same value by pointer.

#include <iostream>
using namespace std;

int main(){

    int number;
    int *ptr;

    cout << "Enter a number: ";
    cin >> number;

    ptr= &number;

    cout << "Now I am showing you the number from a pointer: " << *ptr;
    
    return 0;
}