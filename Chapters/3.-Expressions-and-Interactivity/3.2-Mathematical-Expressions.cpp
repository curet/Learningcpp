// This program asks the user to enter the numerator 
// and denominator of a fraction and it displays the
// decimal value.

#include <iostream>
using namespace std;

int main()
{
   double numerator, denominator;

   cout << "This program shows the decimal value of ";
   cout << "a fraction.\n";
   cout << "Enter the numerator: ";
   cin >> numerator;
   cout << "Enter the denominator: ";
   cin >> denominator;
   cout << "The decimal value is ";
   cout << (numerator / denominator) << endl;
   return 0;
}


//--------------------------------------------------------------------------

// This program calculates the area of a circle.
// The formula for the area of a circle is Pi times
// the radius squared. Pi is 3.14159.
#include <iostream>
#include <cmath>   // needed for pow function
using namespace std;

int main()
{
   const double PI = 3.14159;
   double area, radius;

   cout << "This program calculates the area of a circle.\n";
   cout << "What is the radius of the circle? ";
   cin >> radius;
   area = PI * pow(radius, 2.0);
   cout << "The area is " << area << endl;
   return 0;
}


//--------------------------------------------------------------------------


// This program calculates the average
// of three test scores.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double test1, test2, test3;  // To hold the scores
    double average;              // To hold the average

    // Get the three test scores.
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    
    // Calculate the average of the scores.
    average = (test1 + test2 + test3) / 3.0;
    
    // Display the average.
    cout << "The average score is: " << average << endl;
    return 0;
}

