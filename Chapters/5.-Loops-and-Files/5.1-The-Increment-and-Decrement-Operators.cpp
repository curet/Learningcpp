// 5.1 THE INCREMENT AND DECREMENT OPERATORS


// This program demonstrates the ++ and -- operators.
#include <iostream>
using namespace std;

int main()
{
   int num = 4;   // num starts out with 4.

   // Display the value in num.
   cout << "The variable num is " << num << endl;
   cout << "I will now increment num.\n\n";

   // Use postfix ++ to increment num.
   num++;
   cout << "Now the variable num is " << num << endl;
   cout << "I will increment num again.\n\n";

   // Use prefix ++ to increment num.
   ++num;
   cout << "Now the variable num is " << num << endl;
   cout << "I will now decrement num.\n\n";

   // Use postfix -- to decrement num.
   num--;
   cout << "Now the variable num is " << num << endl;
   cout << "I will decrement num again.\n\n";

   // Use prefix -- to increment num.
   --num;
   cout << "Now the variable num is " << num << endl;
   return 0;
}


// -------------------------------------------------------------

// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
   int num = 4;

   cout << num << endl;   // Displays 4
   cout << num++ << endl; // Displays 4, then adds 1 to num
   cout << num << endl;   // Displays 5
   cout << ++num << endl; // Adds 1 to num, then displays 6
   cout << endl;          // Displays a blank line

   cout << num << endl;   // Displays 6
   cout << num-- << endl; // Displays 6, then subtracts 1 from num
   cout << num << endl;   // Displays 5
   cout << --num << endl; // Subtracts 1 from num, then displays 4

   return 0;
}
