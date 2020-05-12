// find the factorial of a number using pointers

#include <iostream>
using namespace std;

int main(){
    
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double *ptr = &number;
    double fact = 1;

    if(*ptr==0) fact = 1;

    while(*ptr > 1){
        fact *= (*ptr)--;
    }

    cout << fact;

    return 0;
}