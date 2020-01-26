#include <iostream>
#define ARR_SIZE 10
using namespace std;

int main(int argc, char **argv)
{
  int numArray[ARR_SIZE];
  int i;

  // Input
  for (i = 0; i < ARR_SIZE; ++i)
  {
    cout << "\nEnter a positive number:\n";
    cin >> numArray[i];
  }

  // Output
  cout << "\nNow check out this sweet array:\n";

  for (i = 0; i < ARR_SIZE; ++i)
  {
    cout << numArray[i] << " ";
  }

  cout << endl;

  return 0;
}
