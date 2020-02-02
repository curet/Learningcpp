// THE IF STATEMENT

// This program averages three test scores
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const int HIGH_SCORE = 95;   // A high score is 95 or greater
   int score1, score2, score3;  // To hold three test scores
   double average;              // TO hold the average score

   // Get the three test scores.
   cout << "Enter 3 test scores and I will average them: ";
   cin >> score1 >> score2 >> score3;
   
   // Calculate and display the average score.
   average = (score1 + score2 + score3) / 3.0;
   cout << fixed << showpoint << setprecision(1);
   cout << "Your average is " << average << endl;
   
   // If the average is a high score, congratulate the user.
   if (average > HIGH_SCORE)
      cout << "Congratulations! That's a high score!\n";
   return 0;
} 

//--------------------------------------------------------------------------

// This program demonstrates how a misplaced semicolon
// prematurely terminates an if statement.
#include <iostream>
using namespace std;

int main()
{
   int x = 0, y = 10;

   cout << "x is " << x << " and y is " << y << endl;
   if (x > y);    // Error! Misplaced semicolon
      cout << "x is greater than y\n"; //This is always executed.
   return 0;
}

//--------------------------------------------------------------------------

// This program demonstrates how floating-point 
// round-off errors can make equality operations unreliable.
#include <iostream>
using namespace std;

int main()
{
   double a = 1.5;            // a is 1.5.
   double b = 1.5;            // b is 1.5.

   a += 0.0000000000000001;   // Add a little to a.
   if (a == b)
      cout << "Both a and b are the same.\n";
   else
      cout << "a and b are not the same.\n";

   return 0;
}


//--------------------------------------------------------------------------

// This program averages 3 test scores. The if statement
// uses the = operator, but the == operator was intended.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int score1, score2, score3;  // To hold three test scores
   double average;              // TO hold the average score

   // Get the three test scores.
   cout << "Enter 3 test scores and I will average them: ";
   cin >> score1 >> score2 >> score3;
   
   // Calculate and display the average score.
   average = (score1 + score2 + score3) / 3.0;
   cout << fixed << showpoint << setprecision(1);
   cout << "Your average is " << average << endl;

   // Our intention is to congratulate the user
   // for having a perfect score. But, this doesn't work.
   if (average = 100)  // WRONG! This is an assignment!
      cout << "Congratulations! That's a perfect score!\n";
   return 0;
}
