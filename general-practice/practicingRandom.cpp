// This program it is just to practice working with random numbers

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {

srand(time(NULL));
for(int i=0;i<10;i++){

double dam = -1;

  for(int j=0;j<10;j++){
    int randomized = rand();
  
    if(randomized > dam){
      dam = randomized;
    }

    cout << " " << randomized;
  }
  cout << " d:" << dam;
  cout << endl;
  
}

}
