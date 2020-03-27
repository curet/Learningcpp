// 6.10 LOCAL AND GLOBAL VARIABLES

// This program shows that variables defined in a function
// are hidden from other functions.
#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype

int main()
{
   int num = 1;   // Local variable

   cout << "In main, num is " << num << endl;
   anotherFunction();
   cout << "Back in main, num is " << num << endl;
   return 0;
}

//*****************************************************
// Definition of anotherFunction                      *
// It has a local variable, num, whose initial value  *
// is displayed.                                      *
//*****************************************************

void anotherFunction()
{
   int num = 20;  // Local variable

   cout << "In anotherFunction, num is " << num << endl;
}

// -------------------------------------------------------


// This program shows that a global variable is visible
// to all the functions that appear in a program after
// the variable's declaration.
#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype
int num = 2;            // Global variable

int main()
{
   cout << "In main, num is " << num << endl;
   anotherFunction();
   cout << "Back in main, num is " << num << endl;
   return 0;
}

//*****************************************************
// Definition of anotherFunction                      *
// This function changes the value of the             *
// global variable num.                               *
//*****************************************************

void anotherFunction()
{
   cout << "In anotherFunction, num is " << num << endl;
   num = 50;
   cout << "But, it is now changed to " << num << endl;
}

// -----------------------------------------------------


// This program has an uninitialized global variable.
#include <iostream>
using namespace std;

int globalNum;  // Global variable, automatically set to zero

int main()
{
   cout << "globalNum is " << globalNum << endl;
   return 0;
}

// ------------------------------------------------------


// This program calculates gross pay.
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const double PAY_RATE = 22.55;    // Hourly pay rate
const double BASE_HOURS = 40.0;   // Max non-overtime hours
const double OT_MULTIPLIER = 1.5; // Overtime multiplier

// Function prototypes
double getBasePay(double);
double getOvertimePay(double);

int main()
{
   double hours,           // Hours worked
          basePay,         // Base pay
          overtime = 0.0,  // Overtime pay
          totalPay;        // Total pay

   // Get the number of hours worked.
   cout << "How many hours did you work? ";
   cin >> hours;

   // Get the amount of base pay.
   basePay = getBasePay(hours);

   // Get overtime pay, if any.
   if (hours > BASE_HOURS)
      overtime = getOvertimePay(hours);

   // Calculate the total pay.
   totalPay = basePay + overtime;

   // Set up numeric output formatting.
   cout << setprecision(2) << fixed << showpoint;

   // Display the pay.
   cout << "Base pay: $" << basePay << endl
        << "Overtime pay $" << overtime << endl
        << "Total pay $" << totalPay << endl;
   return 0;
}

//************************************************
// The getBasePay function accepts the number of *
// hours worked as an argument and returns the   *
// employee's pay for non-overtime hours.        *
//************************************************

double getBasePay(double hoursWorked)
{
   double basePay; // To hold base pay

   // Determine base pay.
   if (hoursWorked > BASE_HOURS)
      basePay = BASE_HOURS * PAY_RATE;
   else
      basePay = hoursWorked * PAY_RATE;

   return basePay;
}

//*************************************************
// The getOvertimePay function accepts the number *
// of hours worked as an argument and returns the *
// employee's overtime pay.                       *
//*************************************************

double getOvertimePay(double hoursWorked)
{
   double overtimePay; // To hold overtime pay

   // Determine overtime pay.
   if (hoursWorked > BASE_HOURS)
   {
      overtimePay = (hoursWorked - BASE_HOURS) *
               PAY_RATE * OT_MULTIPLIER;
   }
   else
      overtimePay = 0.0;

   return overtimePay;
}

// --------------------------------------------------------


// This program demonstrates how a local variable
// can shadow the name of a global constant.
#include <iostream>
using namespace std;

// Gobal constant.
const int BIRDS = 500;

// Function prototype
void california();

int main()
{
   cout << "In main there are " << BIRDS
        << " birds.\n";
   california();
   return 0;
}

//********************************************
// california function                       *
//********************************************

void california()
{
   const int BIRDS = 10000;
   cout << "In california there are " << BIRDS
        << " birds.\n";
}
