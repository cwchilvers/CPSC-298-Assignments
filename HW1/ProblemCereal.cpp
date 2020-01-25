#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  double weight;
  double numBoxes;
  const double ozPerTon = 35273.92;

  // Ask for weight of cereal package
  cout << "Weight of cereal box in oz:\n";
  cin >> weight;

  // t = oz/35273.92
  weight = weight / ozPerTon;

  // Display weight in metric tons
  cout << "\n1 cereal box = " << weight << "t\n";

  // # of boxes needed to = 1 metric ton
  numBoxes = 1 / weight;

  // Display # of boxes
  cout << endl << numBoxes << " boxes in 1 metric ton.\n";

  return 0;
}
