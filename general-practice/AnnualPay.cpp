//
// Created by Jose C.S. Curet on 3/2/20.
//

// This program calculates the employee anual payment based on salary per pay periods
// Display the total annual pay on the screen.

#include <iostream>
using namespace std;

int main()
{
    double payAmounts, periods, annualPay;

    cout << "Enter how much do you earn per periods: ";
    cin >> payAmounts;
    cout << "Enter how many periods did you worked in the previous year: ";
    cin >> periods;

    cout << "\nYour Annual income is of: " << (payAmounts * periods) << "$";
    return 0;
}