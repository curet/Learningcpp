/// José Constantino Sánchez Curet - Calculator using switch
#include <iostream>
using namespace std;

int main()
{

double a = 0,
       b = 0,
       result;
char action;
string repeatProgram;

cout << "This is a Calculator" << endl;

do{

cout << "Select the letter based on how you want to proceed" << endl;
cout << "\n[A]. Sum" << endl;
cout << "[B]. Subtract" << endl;
cout << "[C]. Multiply" << endl;
cout << "[D]. Divide" << endl;
cin >> action;

while ((action < 65 || action > 68) && (action < 97 || action > 100)) {
  cout << "Please enter a valid letter! "<< endl;
  cin >> action;
}

switch (action) {
  case 'A':
  case 'a':
          cout << "Enter first number: ";
          cin >> a;
          cout << "Enter second number: ";
          cin >> b;
          result = a + b;
          break;
  case 'B':
  case 'b':
          cout << "Enter first number: ";
          cin >> a;
          cout << "Enter second number: ";
          cin >> b;
          result = a - b;
          break;
  case 'C':
  case 'c':
          cout << "Enter first number: ";
          cin >> a;
          cout << "Enter second number: ";
          cin >> b;
          result = a * b;
          break;
  case 'D':
  case 'd':
          cout << "Enter first number: ";
          cin >> a;
          cout << "Enter second number: ";
          cin >> b;
          result = a / b;
          break;
}

cout << "\nThe result is: " << result << endl;

cout << "If you want to repeat the program enter 'y', otherwise enter other letter: ";
cin >> repeatProgram;

} while(repeatProgram == "Y" || repeatProgram == "y");

return 0;
}
