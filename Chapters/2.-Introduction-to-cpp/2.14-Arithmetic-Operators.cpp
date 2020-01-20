//2.14 ARITHMETIC OPERATOR
//The modulus operator, which only works with integer operands,
// returns the remainder of an integer division.

leftOver = 17 % 3; // assigns 2 to leftOver

//--------------------------------------------------------------------------


// This program calculates hourly wages, including ovetime.
#include <iostream>
using namespace std;

int main()
{
    double regularWages,                // To hold regular wages
           basePayRate = 18.25,         // Base pay rate
           regularHours = 40.0,         // Hours worked less overtime
           overtimeWages,               // To hold overtime wages
           overtimePayRate = 27.78,     // Overtime pay rate
           overtimeHours = 10,          // Overtime hours worked
           totalWages;                  // To hold total wages

    // Calculate the regular wages. 
    regularWages = basePayRate * regularHours;

    // Calculate the overtime wages.
    overtimeWages = overtimePayRate * overtimeHours;

    // Calculate the total wages.
    totalWages = regularWages + overtimeWages;

    // Display the total wages.
    cout << "Wages for this week are $" << totalWages << endl; return 0;

}

//--------------------------------------------------------------------------

// This program calculates the amount of pay that will be
// contributed to a retirement plan if 5%, 7% or 10% of monthly
// pay is withheld.
#include <iostream>
using namespace std;

int main()
{
	// Variables to hold the montly pay and the
	// amount of contribution.
	double monthlyPay = 6000.0, contribution;

	// Calculate and display a 5% contribution.
	contribution = monthlyPay * 0.05;
	cout << "5 percent is $" << contribution
			 << " per month.\n";

	// Calculate and display a 7% contribution.
	contribution = monthlyPay * 0.07;
	cout << "7 percent is $" << contribution
			 << " per month.\n";

	// Calculate and display a 10% contribution.
	contribution = monthlyPay * 0.1;
	cout << "10 percent is $" << contribution
			 << " per month.\n";
	
	return 0;

}

//--------------------------------------------------------------------------

// This program calculates the sale price of an item
// that is regularly priced at $59.95, with a 20 percent
// discount substracted.
#include <iostream>
using namespace std;

int main()
{
	// Variables to hold the regular price, the amount of a
	// discount, and the sale price.
	double regularPrice = 59.95, discount, salePrice;
	
	// Calculate the amount of a 20% discount.
	discount = regularPrice * 0.2;
	
	// Calculate the sale price by subtracting the
	// discount from the regular price.
	salePrice = regularPrice - discount;

	// Display the results.
	cout << "Regular price: $" << regularPrice << endl;
	cout << "Discount amount: $" << discount << endl;
	cout << "Sale price: $" << salePrice << endl;
	return 0;
}

//--------------------------------------------------------------------------

// This program extracts the rightmost digit of a number.
#include <iostream>
using namespace std;

int main()
{
	int number = 12345;
	int rightMost = number % 10;

	cout << "The rightmost digit in "
			 << number << " is "
			 << rightMost << endl;

	return 0;
}

// output: The rightmost digit in 12345 is 5

//--------------------------------------------------------------------------
// This program converts seconds to minutes and seconds.
#include <iostream>
using namespace std;

int main()
{
	// The total seconds is 125.
	int totalSeconds = 125;
	
	// Variables for minutes and seconds
	int minutes, seconds;

	// Get the number of minutes.
	minutes = totalSeconds / 60;
	
	// Get the remaining seconds.
	seconds = totalSeconds % 60;
	
	// Display the results/
	cout << totalSeconds << " seconds is equivalent to:\n";
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;
	return 0;
}

//--------------------------------------------------------------------------

//Checkpoint 2.14
2.21 is not valid
2.22 int x = 7, y = 16, z = 28;
2.23
	#include <iostream>
	using namespace std;
	
	int main()
	{
		double number;
		number = 62.7;
		cout << number << endl;
		return 0;
	}
2.24 This is an example of integer division.