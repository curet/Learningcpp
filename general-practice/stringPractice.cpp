/// Tuesday, March 31, 2020

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    char arre1[10]={'b','u','e','n'};
    char arre2[4]={'d','i','a'};

    cout << arre1 << " " << arre2; // There is an error in the output ** must verify that ---
                                    // now it displays correcly because I put a bigger number on arre1, but I don't specify the outout is "buen diabuen"

    // bool iguales = false; // las booleanas siempre se deben inicializar
    // iguales=strcmp(arre1,arre2);

    // //strcy(arreglodestino, arreglofuente);
    // //strncy(arreglodestino, arreglofuente, cantidad a copiar);
    //strcat(arre1,arre2); concatenate strings
    //strlcpy(arre1, arre2.espacios);
    
    // cout << iguales;

    //cout << arre2; 
    return 0;
}