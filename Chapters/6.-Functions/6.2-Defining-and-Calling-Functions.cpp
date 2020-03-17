// DEFINING AND CALLING FUNCTIONS

// This program has two functions: main and displayMessage
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "Hello from main.\n";
   displayMessage();
   cout << "Back in function main again.\n";
   return 0;
}

// --------------------------------------------------------

// The function displayMessage is repeatedly called from a loop.
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "Hello from main.\n";
   for (int count = 0; count < 5; count++)
      displayMessage(); // Call displayMessage
   cout << "Back in function main again.\n";
   return 0;
}

// -------------------------------------------------


// This program has three functions: main, first, and second.
#include <iostream>
using namespace std;

//*****************************************
// Definition of function first           *
// This function displays a message.      *
//*****************************************

void first()
{
   cout << "I am now inside the function first.\n";
}

//*****************************************
// Definition of function second          *
// This function displays a message.      *
//*****************************************

void second()
{
   cout << "I am now inside the function second.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "I am starting in function main.\n";
   first();    // Call function first
   second();   // Call function second
   cout << "Back in function main again.\n";
   return 0;
}

// ------------------------------------------------


// This program has three functions: main, deep, and deeper
#include <iostream>
using namespace std;

//*****************************************
// Definition of function deeper          *
// This function displays a message.      *
//*****************************************

void deeper()
{
   cout << "I am now inside the function deeper.\n";
}

//*****************************************
// Definition of function deep            *
// This function displays a message.      *
//*****************************************

void deep()
{
   cout << "I am now inside the function deep.\n";
   deeper();   // Call function deeper
   cout << "Now I am back in deep.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
   cout << "I am starting in function main.\n";
   deep();     // Call function deep
   cout << "Back in function main again.\n";
   return 0;
}

