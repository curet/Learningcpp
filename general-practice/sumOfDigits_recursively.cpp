// This function return the sum of digits of a given number

#include <iostream>

using namespace std;

int sumOfDigits(int a){
    
    if(a == 0) return 0;
    return (a % 10) + sumOfDigits(a / 10);
}

// 1234 / 10 = 123     //  1234 % 10 = 4
// 123  / 10 = 12      //  123  % 10 = 3
// 12   / 10 = 1       //  12   % 10 = 2
// 1                   //  1    % 10 = 1

int main(){

    cout << sumOfDigits(1234) << endl;
    return 0;
}