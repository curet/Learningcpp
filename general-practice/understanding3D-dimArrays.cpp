// The objective of this program is help me understand how 3D-dim arrays work
#include <iostream>
using namespace std;

int main(){

    int matrix[2][4][4] = {1,2,3,4,5,6,7,8,9,
                           1,2,3,4,5,6,7,8,9,
                           1,2,3,4,5,6,7,8,9,
                           1,2,3,4
                        };

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                cout << matrix[i][j][k] << " ";
            }cout << endl;
        }cout << endl;
    }
    return 0;
}