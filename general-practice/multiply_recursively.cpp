// this program multiply recursively

#include <iostream>

using namespace std;

int multiply_recursively(int a, int b){
    if(a == 0) return 0;
    return multiply_recursively(a - 1, b) + b;
}

int main(){

    int a = 2;
    int b = 3;

    cout << multiply_recursively(a,b);

    return 0;
}