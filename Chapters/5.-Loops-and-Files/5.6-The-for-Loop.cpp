// 5.6 THE for LOOP

// This program displays the numbers 1 through 10 and
// their squares.
#include <iostream>
using namespace std;

int main()
{
   const int MIN_NUMBER = 1,   // Starting value
             MAX_NUMBER = 10;  // Ending value
   int num;

   cout << "Number Number Squared\n";
   cout << "-------------------------\n";

   for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
      cout << num << "\t\t" << (num * num) << endl;

   return 0;
}

// ---------------------------------------------------------

// This program demonstrates a user controlled for loop.
#include <iostream>
using namespace std;

int main()
{
   int minNumber,   // Starting number to square
       maxNumber;   // Maximum number to square

   // Get the minimum and maximum values to display.
   cout << "I will display a table of numbers and "
        << "their squares.\n"
        << "Enter the starting number: ";
   cin >> minNumber;
   cout << "Enter the ending number: ";
   cin >> maxNumber;

   // Display the table.
   cout << "Number Number Squared\n"
        << "-------------------------\n";

   for (int num = minNumber; num <= maxNumber; num++)
      cout << num << "\t\t" << (num * num) << endl;

   return 0;
} 

// ----------------------------------------------------------

// This program converts the speeds 60 kph through
// 130 kph (in 10 kph increments) to mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Constants for the speeds
   const int START_KPH = 60,  // Starting speed
             END_KPH = 130,   // Ending speed
             INCREMENT = 10;  // Speed increment

   // Constant for the conversion factor
   const double CONVERSION_FACTOR = 0.6214;

   // Variables
   int kph;       // To hold speeds in kph
   double mph;    // To hold speeds in mph

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Display the table headings.
   cout << "KPH\tMPH\n";
   cout << "---------------\n";

   // Display the speeds.
   for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
   {
      // Calculate mph
      mph = kph * CONVERSION_FACTOR;

      // Display the speeds in kph and mph.
      cout << kph << "\t" << mph << endl;

   }
   return 0;
} 
