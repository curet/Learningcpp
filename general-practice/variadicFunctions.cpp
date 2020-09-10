// JOSE C.S. CURET
// this is just to experiment with variadic functions -- this program sum a range of given numbers

#include <iostream>
#include <string>

using namespace std;

template<typename T>
T sum(T v) {
  return v;
}

template<typename T, typename... Args>
T sum(T first, Args... args) {
  return sum(args...) + first;
}

int main() {

  int sumOFValues = sum(3, 4, 5, 6, 6, 7);
  cout << sumOFValues << endl;

  return 0;
}