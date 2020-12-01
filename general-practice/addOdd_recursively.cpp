// return the sum of all positive odd numbers cumulative of a number from 1 to n

#include <iostream>

using namespace std;

int addOdd(int n){

    if(n <= 0) return 0;

    if(n % 2 != 0){
        return n + addOdd( n - 1);
    }else{
        return addOdd(n - 1);
    }

}

int main(){

    cout << addOdd(7) << endl;

    return 0;
}