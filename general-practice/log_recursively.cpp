// this function caltulate the log

#include <iostream>

using namespace std;

int log_recursively(int base, int number){

    if(number == 1) return 0;
    return 1 + log_recursively(base, number / base);
}

int main(){

    cout << log_recursively(2, 8) << endl;

    return 0;
}