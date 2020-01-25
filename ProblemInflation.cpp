#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  double itemCost;
  double inflRate;
  int years;
  int loop;
  int i;

  // Input
  cout << "Cost of item: \n";
  cin >> itemCost;
  cout << "\nYears from now until purchase: \n";
  cin >> years;
  cout << "\nInflation rate (as percentage): \n";
  cin >> inflRate;

  // Change to decimal
  inflRate = inflRate * .01;

  // Calculate
  for (i = years; i != 0; --i)
  {
      itemCost = itemCost * (1 + inflRate);
  }

  // Output
  cout << "\nCost of item " << years << " years from now will be ";
  inflRate = inflRate * 100;
  cout << itemCost << " at an inflation rate of " << inflRate << "%.\n";

  return 0;
}
