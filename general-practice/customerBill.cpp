//
// Created by Jose C.S. Curet on 3/2/20.
//

// This program computes and display the customer bill, including taxes
// Display the meal cost, tax amount, tip amount, and total bill on the screen.

#include <iostream>
using namespace std;

int main()
{

    // Variables declaration
    const double tax = 6.75;
    double mealCost, tip, totalBill;

    // Input
    cout << "Enter meal cost: ";
    cin >> mealCost;
    cout << "Enter the tip amount: ";
    cin >> tip;

    // Calculation
    totalBill = (mealCost + tip) * tax;

    // Output
    cout << "--------------- Costumer Bill ---------------" << endl;
    cout << "Meal cost: " << mealCost << "$" << endl;
    cout << "Tax amount: "<< tax << "$" << endl;
    cout << "Total bill: "<< totalBill << "$";

    return 0;
}