// 6.8 RETURNING A VALUE FROM A FUNCTION

// This program uses a function that returns a value.
#include <iostream>
using namespace std;

// Function prototype
int sum(int, int);

int main()
{
   int value1 = 20,   // The first value
       value2 = 40,   // The second value
       total;         // To hold the total

   // Call the sum function, passing the contents of
   // value1 and value2 as arguments. Assign the return
   // value to the total variable.
   total = sum(value1, value2);

   // Display the sum of the values.
   cout << "The sum of " << value1 << " and "
        << value2 << " is " << total << endl;
   return 0;
}

//*****************************************************
// Definition of function sum. This function returns  *
// the sum of its two parameters.                     *
//*****************************************************

int sum(int num1, int num2)
{
   return num1 + num2;
}

// -----------------------------------------------------------

// This program demonstrates two value-returning functions.
// The square function is called in a mathematical statement.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
double getRadius();
double square(double);

int main()
{
   const double PI = 3.14159; // Constant for pi
   double radius;             // To hold the circle's radius
   double area;               // To hold the circle's area

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(2);
   
   // Get the radius of the circle.
   cout << "This program calculates the area of ";
   cout << "a circle.\n";
   radius = getRadius();
   
   // Caclulate the area of the circle.
   area = PI * square(radius);
   
   // Display the area.
   cout << "The area is " << area << endl;
   return 0;
}

//******************************************************
// Definition of function getRadius.                   *
// This function asks the user to enter the radius of  *
// the circle and then returns that number as a double.*
//******************************************************

double getRadius()
{
   double rad;

   cout << "Enter the radius of the circle: ";
   cin >> rad;
   return rad;
}

//******************************************************
// Definition of function square.                      *
// This function accepts a double argument and returns *
// the square of the argument as a double.             *
//******************************************************

double square(double number)
{
   return number * number;
}

// --------------------------------------------------------


// This program converts cups to fluid ounces.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showIntro();
double getCups();
double cupsToOunces(double);

int main()
{
   // Variables for the cups and ounces.
   double cups, ounces;

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Display an intro screen.
   showIntro();

   // Get the number of cups.
   cups = getCups();

   // Convert cups to fluid ounces.
   ounces = cupsToOunces(cups);

   // Display the number of ounces.
   cout << cups << " cups equals "
       << ounces << " ounces.\n";

   return 0;
}

//******************************************
// The showIntro function displays an      *
// introductory screen.                    *
//******************************************

void showIntro()
{
   cout << "This program converts measurements\n"
       << "in cups to fluid ounces. For your\n"
       << "reference the formula is:\n"
       << "    1 cup = 8 fluid ounces\n\n";
}

//******************************************
// The getCups function prompts the user   *
// to enter the number of cups and then    *
// returns that value as a double.         *
//******************************************

double getCups()
{
   double numCups;

   cout << "Enter the number of cups: ";
   cin >> numCups;
   return numCups;
}

//******************************************
// The cupsToOunces function accepts a     *
// number of cups as an argument and       *
// returns the equivalent number of fluid  *
// ounces as a double.                     *
//******************************************

double cupsToOunces(double numCups)
{
   return numCups * 8.0;
}
