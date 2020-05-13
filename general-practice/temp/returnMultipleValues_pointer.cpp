// return multiple values using pointers

#include <iostream>
using namespace std;

void funt(int *a, int *b){
    *a += *b;
    *b += 2 * *a;
}

int main(){

    int x = 2;
    int y = 3;

    funt(&x,&y);
    
    cout << x << endl;
    cout << y << endl;

    return 0;
}