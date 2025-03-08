#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int num = rand() % 100 + 1; // Generates a random number between 1 and 100
  cout << "The random number is: " << num << endl;
  return 0;
}
