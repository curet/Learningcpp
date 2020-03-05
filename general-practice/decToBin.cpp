//
// Created by Jose C.S. Curet on 3/5/20.
//
// This program convert a number from base 10 to base 2

#include <iostream>
#include <string>

using namespace std;

// Prototype
string decToBin(int);

// main Function
int main()
{
    int entero;
    string binario;

    cout <<"Entre el numero: ";
    cin >> entero;

    binario = decToBin(entero);

    cout << "La representation de " << entero << " en binario es: " << binario << endl;

    return 0;
}

// Function decToBin
string decToBin(int numero)
{
    string bin = " ";
    while(numero){
        if(numero%2){
            bin = "1" + bin;
        }
        else{
            bin = "0" + bin;
        }
        numero /=2;
    }
    return bin;
}