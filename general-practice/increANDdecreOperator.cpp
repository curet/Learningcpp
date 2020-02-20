// This is practicing with increment and decrement operator

#include <iostream>
using namespace std;

int main()
{
  int num = 12;

  // The following couts shouts how the variable value change even are just
  // increasing in the cout process
  cout << "num started at: " << num << endl;
  cout << "num++: " << num++ << endl;
  cout << "num++: " << num++ << endl;

  num = num++;
  num = num--;

  cout<< "Output of num after assignment num++ and num-- to the num variable: " << endl;
  cout << num << endl;
  return 0;
}
