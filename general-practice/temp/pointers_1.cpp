// exercise from: https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/pointers/exercises_pointers.html
// Write a program that asks the user to enter integers as inputs to be stored in the variables
//  'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB.
//  Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.


#include <iostream>
using namespace std;

int main(){

    int a=1;
    int b=2;
    int *ptrA;
    int *ptrB;
    
    cout << "Enter int 1: ";
    cin >> a;
    cout << "Enter int 2: ";
    cin >> b;

    ptrA = &a;
    ptrB = &b;

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    return 0;
}