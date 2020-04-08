// this program calculate the Fibonacci recursively
#include <iostream>
using namespace std;

double fibo(int number){
    if(number==2 || number==1)return 1;
    return fibo(number-1) + fibo(number-2);
}
int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << fibo(number) << " ";
    return 0;
}