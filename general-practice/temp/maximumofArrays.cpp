// find the largest numbers in a group of arrays [takes an array of arrays with numbers]

#include <iostream>
using namespace std;

int main(){

    int A[] = {1,11,3};
    int B[] = {4,1,3};
    int C[] = {1,7,0};
    int D[] = {2,1};
    int largest = 0;

    for(int val: A){
        if(largest < val){
            largest = val;
        }
    }
    for(int val: B){
        if(largest < val){
            largest = val;
        }
    }
    for(int val: C){
        if(largest < val){
            largest = val;
        }
    }
    for(int val: D){
        if(largest < val){
            largest = val;
        }
    }

    cout << largest;

    return 0;
}