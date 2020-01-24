// 3.4 OVERFLOW AND UNDERFLOW
// This program demonstrates integer overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
   // testVar is initialized with the maximum value for a short.
   short testVar = 32767;

   // Display testVar.
   cout << testVar << endl;
   
   // Add 1 to testVar to make it overflow.
   testVar = testVar + 1;
   cout << testVar << endl;
   
   // Subtract 1 from testVar to make it underflow.
   testVar = testVar - 1;
   cout << testVar << endl;
   return 0;
} 

//--------------------------------------------------------------------------

// This program can be used to see how your system handles
// floating point overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
   float test;

   test = 2.0e38 * 1000;    // Should overflow test.
   cout << test << endl;
   test = 2.0e-38 / 2.0e38; // Should underflow test.
   cout << test << endl;
   return 0;
}

//--------------------------------------------------------------------------


