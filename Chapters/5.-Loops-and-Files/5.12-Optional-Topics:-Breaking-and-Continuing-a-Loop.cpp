// 5.12 Optional Topics: Breaking and Continuing a Loop 


// This program raises the user's number to the powers
// of 0 through 10.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int value;
   char choice;

   cout << "Enter a number: ";
   cin >> value;
   cout << "This program will raise " << value;
   cout << " to the powers of 0 through 10.\n";
   for (int count = 0; count <= 10; count++)
   {
      cout << value << " raised to the power of ";
      cout << count << " is " << pow(value, count);
      cout << "\nEnter Q to quit or any other key ";
      cout << "to continue. ";
      cin >> choice;
      if (choice == 'Q' || choice == 'q')
         break;
   }
   return 0;
}

// -------------------------------------------------------

// This program calculates the charges for DVD rentals.
// Every third DVD is free.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int dvdCount = 1;    // DVD counter
   int numDVDs;         // Number of DVDs rented
   double total = 0.0;  // Accumulator
   char current;        // Current release, Y or N

   // Get the number of DVDs.
   cout << "How many DVDs are being rented? ";
   cin >> numDVDs;

   // Determine the charges.
   do
   {
      if ((dvdCount % 3) == 0)
      {
         cout << "DVD #" << dvdCount << " is free!\n";
         continue;  // Immediately start the next iteration
      }
      cout << "Is DVD #" << dvdCount;
      cout << " a current release? (Y/N) ";
      cin >> current;
      if (current == 'Y' || current == 'y')
         total += 3.50;
      else
         total += 2.50;
   } while (dvdCount++ < numDVDs);

   // Display the total.
   cout << fixed << showpoint << setprecision(2);
   cout << "The total is $" << total << endl;
   return 0;
}

