// 4.12

// This program demonstrates how characters can be
// compared with the relational operators.
#include <iostream>
using namespace std;

int main()
{
   char ch;

   // Get a character from the user.
   cout << "Enter a digit or a letter: ";
   ch = cin.get();

   // Determine what the user entered.
   if (ch >= '0' && ch <= '9')
      cout << "You entered a digit.\n";
   else if (ch >= 'A' && ch <= 'Z')
      cout << "You entered an uppercase letter.\n";
   else if (ch >= 'a' && ch <= 'z')
      cout << "You entered a lowercase letter.\n";
   else
      cout << "That is not a digit or a letter.\n";

   return 0;
}

//--------------------------------------------------------------------------

// This program uses relational operators to compare a string
// entered by the user with valid stereo part numbers.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   const double PRICE_A = 249.0,
                PRICE_B = 299.0;

   string partNum; // Holds a stereo part number

   // Display available parts and get the user's selection
   cout << "The stereo part numbers are:\n"
        << "Boom Box : part number S-29A \n"
        << "Shelf Model: part number S-29B \n"
        << "Enter the part number of the stereo you\n"
        << "wish to purchase: ";
   cin >> partNum;

   // Set the numeric output formatting
   cout << fixed << showpoint << setprecision(2);

   // Determine and display the correct price
   if (partNum == "S-29A")
      cout << "The price is $" << PRICE_A << endl;
   else if (partNum == "S-29B")
      cout << "The price is $" << PRICE_B << endl;
   else
      cout << partNum << " is not a valid part number.\n";
   return 0;
}
