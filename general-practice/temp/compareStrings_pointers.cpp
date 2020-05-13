// compare two strings using pointers

#include <iostream>
using namespace std;

int main(){

    string A = "pointers";
    string B = "pointers";
    string *ptrA = &A, *ptrB = &B;
    bool compared = false;

    if(*ptrA == *ptrB)compared = true;
    else compared = false;

    cout << compared << endl;

    return 0;
}