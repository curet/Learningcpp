// find the missing number

#include <iostream>
using namespace std;

int main(){

    int A[] = {10,2,3,5,6,7,8,9,1};

    int missing (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10);
    for (int val : A){
        missing = missing - val;
    }
    cout << missing << endl;

    return 0;
}