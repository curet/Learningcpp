// This program it is just to practice how does the
// mutable reserved word works.
#include <iostream>

using namespace std;
int main()
{
	const int constVAR = 5;
	
	cout << constVAR << endl;

	mutable int constVAR = 10; // This will produce the following error --> 'mutable' can only be applied to member variables	
	
	cout << constVAR << endl;
	return 0;
}
