/// Tuesday, March 31, 2020

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int arre[5];

    int x=1;

    for (int &tempo: arre){
        cout << "Entre un valor:";
        cin >> tempo;
    }
    for (int &tempo: arre){
        cout << tempo;
    }

    return 0;
}