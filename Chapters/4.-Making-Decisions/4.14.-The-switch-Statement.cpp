// 4.14 THE SWITCH STATEMENT

// The switch statement in this program tells the user something
// he or she already knows: what they just entered!
#include <iostream>
using namespace std;

int main()
{
   char choice;

   cout << "Enter A, B, or C: ";
   cin >> choice;
   switch (choice)
   {
      case 'A': cout << "You entered A.\n";
                break;
      case 'B': cout << "You entered B.\n";
                break;
      case 'C': cout << "You entered C.\n";
                break;
      default:  cout << "You did not enter A, B, or C!\n";
   }
   return 0;
}

//--------------------------------------------------------------------------


// The switch statement in this program tells the user something
// he or she already knows: what they just entered!
#include <iostream>
using namespace std;

int main()
{
   char choice;

   cout << "Enter A, B, or C: ";
   cin >> choice;
   // The following switch is
   // missing its break statements!
   switch (choice)
   {
      case 'A': cout << "You entered A.\n";
      case 'B': cout << "You entered B.\n";
      case 'C': cout << "You entered C.\n";
      default:  cout << "You did not enter A, B, or C!\n";
   }
   return 0;
}

//--------------------------------------------------------------------------

// This program is carefully constructed to use the "fallthrough"
// feature of the switch statement.
#include <iostream>
using namespace std;

int main()
{
   int modelNum;  // Model number

   // Get a model number from the user.
   cout << "Our TVs come in three models:\n";
   cout << "The 100, 200, and 300. Which do you want? ";
   cin >> modelNum;

   // Display the model's features.
   cout << "That model has the following features:\n";
   switch (modelNum)
   {
      case 300: cout << "\tPicture-in-a-picture.\n";
      case 200: cout << "\tStereo sound.\n";
      case 100: cout << "\tRemote control.\n";
                break;
      default:  cout << "You can only choose the 100,";
                cout << "200, or 300.\n";
   }
   return 0;
}

//--------------------------------------------------------------------------

// The switch statement in this program uses the "fall through"
// feature to catch both uppercase and lowercase letters entered
// by the user.
#include <iostream>
using namespace std;

int main()
{
   char feedGrade;

   // Get the desired grade of feed.
   cout << "Our pet food is available in three grades:\n";
   cout << "A, B, and C. Which do you want pricing for? ";
   cin >> feedGrade;

   // Display the price.
   switch(feedGrade)
   {
      case 'a':
      case 'A': cout << "30 cents per pound.\n";
                break;
      case 'b':
      case 'B': cout << "20 cents per pound.\n";
                break;
      case 'c':
      case 'C': cout << "15 cents per pound.\n";
                break;
      default:  cout << "That is an invalid choice.\n";
   }
   return 0;
}

//--------------------------------------------------------------------------


// This program uses a switch statement to determine
// the item selected from a menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int choice;       // To hold a menu choice
   int months;       // To hold the number of months
   double charges;   // To hold the monthly charges

   // Constants for membership rates
   const double ADULT = 40.0,
                SENIOR = 30.0,
                CHILD = 20.0;

   // Constants for menu choices
   const int ADULT_CHOICE = 1,
             CHILD_CHOICE = 2,
             SENIOR_CHOICE = 3,
             QUIT_CHOICE = 4;

   // Display the menu and get a choice.
   cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
   cin >> choice;

   // Set the numeric ouput formatting.
   cout << fixed << showpoint << setprecision(2);

   // Respond to the user's menu selection.
   switch (choice)
   {
      case ADULT_CHOICE:
         cout << "For how many months? ";
         cin >> months;
         charges = months * ADULT;
         cout << "The total charges are $" << charges << endl;
         break;

      case CHILD_CHOICE:
         cout << "For how many months? ";
         cin >> months;
         charges = months * CHILD;
         cout << "The total charges are $" << charges << endl;
         break;

      case SENIOR_CHOICE:
         cout << "For how many months? ";
         cin >> months;
         charges = months * SENIOR;
         cout << "The total charges are $" << charges << endl;
         break;

      case QUIT_CHOICE:
         cout << "Program ending.\n";
         break;

      default:
         cout << "The valid choices are 1 through 4. Run the\n"
              << "program again and select one of those.\n";
   }

   return 0;
}
