// multiply to matrix using pointers

#include <iostream>
using namespace std;

int main(){

    int A[2][2] = {{1,2},
                   {3,4}};
    int B[2][2] = {{2,5},
                   {6,7}};
    int mult[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            *(*(mult + i) + j) = *(*(A + i) + j) * *(*(B + i) + j);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << *(*(mult + i) + j) << " ";
        }cout << endl;
    }

    return 0;
}