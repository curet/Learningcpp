// Given the string "A string." Print on one line the letter on the index 0,
// the pointer position and the letter t. update the pointer to pointer +2.
// Then, in another line print the pointer and the letters r and g of the string.

#include <iostream>
using namespace std;

int main(){

    char A[] = "A string";
    char *ptrA = A;

    cout << *ptrA << " ";
    cout << *(ptrA + 3) << endl;

    ptrA = (ptrA + 2);

    cout << *(ptrA + 2) << " ";
    cout << *(ptrA + 5) << endl;

    return 0;
}