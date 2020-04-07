// this program is to be a better understand of two dimensional arrays
// purpose: ask a user to insert 9 numbers
// those numbers are placed into a 2D-Array, then display the inserted numbers from that array;

#include <iostream>
using namespace std;

int main(){
    int size =3;
    int arr2D[3][3];


        cout << "Enter 9 random numbers: " << endl;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> arr2D[i][j];
            }
        }

        cout << "\nThese are the numbers you entered in a 3 x 3 matrix: " << endl;
        for(int row=0; row<3; row++){
                for(int column=0; column<3; column++){
                    cout << arr2D[row][column] << " ";
                }cout << endl;
        }

    return 0;
}
