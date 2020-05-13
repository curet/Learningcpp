// concatenate two string using pointers

#include <iostream>
using namespace std;

int main(){

    string A = "first";
    string B = "second";

    string *ptrA = &A, *ptrB = &B;

    *(ptrA) = *(ptrA) + " " + *(ptrB);

    cout << *ptrA << endl;

    return 0;
}