// this program display the Fibonacci sequence using a recursive function
#include <iostream>
using namespace std;

double fibo(int number){
    if(number==2 || number==1)return 1;
    else if(number==0)return 0;
    return fibo(number-1) + fibo(number-2);
}
int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;
    for(int i=0;i<=number;i++){
        cout << fibo(i) << " ";
    } return 0;
}