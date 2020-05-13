// reverse a string using pointers

#include <iostream>
using namespace std;

int main(){

    char R[] = "reverseME";
    int left = 0, right = 9-1;
    char *ptrR = R;
    
    while(left <= right){
        
        swap(*(ptrR + left), *(ptrR + right));
            left++; right--;
            
    }

    for(int i=0; i<9; i++){
        cout << *(ptrR + i);
    }cout << endl;

    return 0;
}