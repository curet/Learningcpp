// 4.8  LOGICAL OPERATORS

// This program demonstrates the && logical operator.
#include <iostream>
using namespace std;

int main()
{
   char employed,    // Currently employed, Y or N
        recentGrad;  // Recent graduate, Y or N

   // Is the user employed and a recent graduate?
   cout << "Answer the following questions\n";
   cout << "with either Y for Yes or N for No.\n";

   cout << "Are you employed? ";
   cin >> employed;
   
   cout << "Have you graduated from college "
        << "in the past two years? ";
   cin >> recentGrad;

   // Determine the user's loan qualifications.
   if (employed == 'Y' && recentGrad == 'Y')
   {
      cout << "You qualify for the special "
           << "interest rate.\n";
   }
   else
   {
      cout << "You must be employed and have\n"
           << "graduated from college in the\n"
           << "past two years to qualify.\n";
   }
   return 0;
} 

//--------------------------------------------------------------------------

// This program demonstrates the logical || operator.
#include <iostream>
using namespace std;

int main()
{
   // Constants for minimum income and years
   const double MIN_INCOME = 35000.0;
   const int MIN_YEARS = 5;

   double income;  // Annual income
   int years;      // Years at the current job

   // Get the annual income
   cout << "What is your annual income? ";
   cin >> income;
   
   // Get the number of years at the current job.
   cout << "How many years have you worked at "
        << "your current job? ";
   cin >> years;
   
   // Determine the user's loan qualifications.
   if (income >= MIN_INCOME || years > MIN_YEARS)
      cout << "You qualify.\n";
   else
   {
      cout << "You must earn at least $"
           << MIN_INCOME << " or have been "
           << "employed more than " << MIN_YEARS
           << " years.\n";
   }
   return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates the logical ! operator.
#include <iostream>
using namespace std;

int main()
{
   // Constants for minimum income and years
   const double MIN_INCOME = 35000.0;
   const int MIN_YEARS = 5;

   double income;  // Annual income
   int years;      // Years at the current job

   // Get the annual income
   cout << "What is your annual income? ";
   cin >> income;
   
   // Get the number of years at the current job.
   cout << "How many years have you worked at "
        << "your current job? ";
   cin >> years;
   
   // Determine the user's loan qualifications.
   if (!(income >= MIN_INCOME || years >  MIN_YEARS))
   {
      cout << "You must earn at least $"
		   << MIN_INCOME << " or have been "
           << "employed more than " << MIN_YEARS 
	       << "years.\n";
   }
   else
      cout << "You qualify.\n";
   return 0;
}
