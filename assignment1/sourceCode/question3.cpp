#include <iostream>
using namespace std;

// forward declaration
void addition(int &nextNo);

int main() {
  int count = 1;
  // adjusted placement of braces on while loop
  while (count < 10) {

    cout << " The number after " << count; // Function increment

    // passed the count variable as argument to the addition function
    addition(count);
    cout << " is " << count << endl;
  }
  return 0;
}

// used pass by reference to modify counter variable directly
void addition(int &nextNo) {
  // Increment the parameter by 1.
  nextNo++;
}
