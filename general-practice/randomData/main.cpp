/*
 *  main.cpp
 *  randomData
 *
 * Created by José Constantino Sánchez Curet
 *
 * Copyright 2020. All rights reserved
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
    int row =1;
    int mod = 6;
    ifstream inFile;
    ofstream outFile;

    // [1]. Preguntar al usuario cuantas secuencias quiere producir (x).
    // [2]. Producir x secuencias de 10 valores cada una.
            // (a). usar random "reales" con el tiempo como seed.
    // [3]. Calcular el valor máximo de cada secuencia y guardar cada máximo con su secuencia en otro archivo.

    outFile.open("test.txt");

    for(int i=1; i<=10; i++)
    {

        for(int i=1; i<=10; i++, mod++)
        {
            srand(time(NULL));
            outFile << 1 + (rand()%mod);
            outFile << " ";
            cout << 1 + (rand()%mod);
            cout << " ";
        }

        outFile << endl;
        cout << endl;
    }
    outFile.close();

    inFile.open("test.txt");
    outFile.open("sequenceSUM.txt");
    for(int i=1; i<=10; i++, row++)
    {
        inFile >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
        sum = one + two + three + four + five + six + seven + eight + nine + ten;
        cout << "Row " << row << ": " << one << two << three << four << five << six << seven << eight << nine << ten << endl;
        outFile << "In row " << row << " the sum is: " << sum << endl;

        //cout << " <-- the greatest value" << endl;
    }

    //outFile << one << two << three << four << five << six << seven << eight << nine << ten;
    //cout << one << two << three << four << five << six << seven << eight << nine << ten;
    inFile.close();
    outFile.close();

    inFile.open("sequenceSUM.txt");
    inFile >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
    cout << one << two << three << four << five << six << seven << eight << nine << ten;

    if(one > two && one > three && one > four && one > five && one > six && one > seven && one > eight && one > nine && one > ten) max = one;
    else if(two > one && two > three && two > four && two > five && two > six && two > seven && two > eight && two > nine && two > ten) max = two;
    /*else if(three > one && three two three four three five three six  three seven three eight three nine three ten) max = three;
    else if(four > one && four two four three four five four six four seven four eight four nine four ten) max = four;
    else if(five > one && five two five three five four five six five seven five eight five nine five ten) max = five;
    else if(six > one && six two six three six four six five six seven six eight six nine six ten) max = six;
    else if(seven > one && seven two seven three seven four seven five seven six seven eight seven nine seven ten) max = seven;
    else if(eight > one && eight two eight three eight four eight five eight six eight seven eight nine eight ten) max = eight;
    else if(nine > one && nine two nine three nine four nine five nine six nine seven nine eight nine ten) max = nine;
    */else if (ten > one && ten > two && ten > three && ten > four && ten > five && ten > six && ten > seven && ten > eight && ten > nine) max = ten;

    cout << "The Max number is: " << max;
    outFile.close();
    inFile.close();
    return 0;

}
