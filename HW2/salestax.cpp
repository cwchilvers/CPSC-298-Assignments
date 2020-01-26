#include <iostream>
using namespace std;

float addTax(float taxRate, float cost)
{
  // Tax = Item Cost x Tax Rate
  taxRate = cost * taxRate;
  // Add tax to final cost
  cost = cost + taxRate;
  return cost;
}

int main(int argc, char **argv)
{
  float salesTax;
  float costItem;

  // Input
  cout << "\nEnter cost of item:\n";
  cin >> costItem;
  cout << "\nEnter sales tax (as percentage):\n";
  cin >> salesTax;

  // Convert to decimal
  salesTax = salesTax/100;

  // Calculate
  costItem = addTax(salesTax, costItem);

  // Output
  cout << "\nTotal Cost: " << costItem << endl;

  return 0;
}
