// this program sum values from 1 to k

#include <iostream>

using namespace std;

int cumulative_sum_recursively(int k){
    if (k <= 0) return 0;
    return  k  + cumulative_sum_recursively(k - 1);
}

// 5 + 4 = 9
// 3 + 2 = 5
// 1 + 0 = 1

int main(){

    cout << cumulative_sum_recursively(5) << endl;
    return 0;
}