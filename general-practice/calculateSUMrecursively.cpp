// this program calculate the SUM recursively
#include <iostream>

using namespace std;

int recursiveSum(int n){

    return (n == 0) ? 0: recursiveSum(n - 1) + n; 
}

int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << recursiveSum(number) << endl;

    return 0;
}