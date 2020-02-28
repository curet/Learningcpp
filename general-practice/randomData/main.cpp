/*
 *  main.cpp
 *  randomData
 *
 * Created by José Constantino Sánchez Curet
 *
 * Copyright 2020 José Constantino Sánchez Curet. All rights reserved
 *
 * Purpose: This program create a file from a 10x column size, then create the amount of rows as the user's prefer based
 * on the input validation.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {

    // Variables Declaration
    double one, two, three, four, five, six, seven, eight, nine, ten;
    double sum = 0, max;
    int row =1, rowsLimit;
    int mod = 6;
    ifstream inFile;
    ofstream outFile;

    // [1]. Preguntar al usuario cuantas secuencias quiere producir (x).
    // [2]. Producir x secuencias de 10 valores cada una.
            // (a). usar random "reales" con el tiempo como seed.
    // [3]. Calcular el valor máximo de cada secuencia y guardar cada máximo con su secuencia en otro archivo.

    cout << "-----------This program will produce a random amount of numbers-----------" << endl;
    cout << "Enter the amount of rows you would like to have: ";
    cin >> rowsLimit;
    while(rowsLimit < 1)
    {
        cout << "You must at least enter one row, please try again!" << endl;
        cout << "Enter the amount of rows you would like to have: ";
        cin >> rowsLimit;
    }

    outFile.open("randomSequence.txt");
//unsigned seed =time(0);
//srand(seed);
    srand(time(NULL));
    for(int i=1; i<=rowsLimit; i++)
    {

        for(int i=1; i<=rowsLimit; i++)
        {
            outFile << 1 +(rand()%mod);
            outFile << " ";
        }
        outFile << endl;
    }
    outFile.close();

    inFile.open("randomSequence.txt");
    outFile.open("rowsSum.txt");
    for(int i=1; i<=rowsLimit; i++, row++)
    {
        inFile >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
        sum = one + two + three + four + five + six + seven + eight + nine + ten;
        cout << one << " " << two << " " << three << " " << four << " " << five << " "
             << six << " " << seven << " " << eight << " " << nine << " " << ten << endl;
        outFile << sum << endl;
    }

    inFile.close();
    outFile.close();

    inFile.open("rowsSum.txt");

    int A = -1;
    int B = 0;

    while(!inFile.eof())
    {
        inFile >> B;
        if(A < B)
            A=B;
    }
    cout << "\nThe Max number based on the sum per rows is: " << A;

    outFile.close();
    inFile.close();
    return 0;

}
