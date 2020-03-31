/// Tuesday, March 31, 2020

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){

    vector <int> fila {1,2,3,4,5};
    fila.push_back(6);
    cout <<fila.at(5)<<endl;
    fila.pop_back();

    for(int i=0; i<fila.size();i++){
        cout << fila.at(i)<< " ";
    }cout << endl;

    int i=4;
    while(!fila.empty()){
        cout << fila.at(i--)<<" ";
        fila.pop_back();
    }
    return 0;
}

