//
// Created by José C.S. Curet on 3/2/20.
//

// Simple program to calculates a customer’s available credit:

#include <iostream>
using namespace std;

int main()
{
    // Inputs about credit
    double customerCreditMaximum, usedCredit, substractCredit;
    cout << "Enter the customer’s maximum credit: ";
    cin >> customerCreditMaximum;
    cout << "Enter the amount of credit used by the customer: ";
    cin >> usedCredit;
    substractCredit = customerCreditMaximum - usedCredit;

    // Output about customer's available credit
    cout << "Customer available credit: " << substractCredit;

    return 0;
}
