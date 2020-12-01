// this program calculate the GCD recursively

#include <iostream>

using namespace std;

int GCD_recursively(int x, int y){
    if(y % x == 0) return x;
    return GCD_recursively(y % x, x);
}

int main(){

    cout << GCD_recursively(8,12) << endl;

    return 0;
}