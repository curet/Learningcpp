// this program calculate the factorial recursively

#include <iostream>
using namespace std;

long long fact(int number){
    if(number==0)return 1;
    return fact(number-1)*(number);
}
int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << fact(number);

    return 0;
}