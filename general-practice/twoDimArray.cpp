// Practicing and understanding two dimensional arrays
#include <iostream>
using namespace std;

int main(){

    int matrix[3][3] = {
                        { 3,6,8 },
                        { 5,4,7 },
                        { 2,4,7 }
                                    };
    // one for per array
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout << matrix[row][col] << " ";
        }cout << endl;
    }
    
    return 0;
}