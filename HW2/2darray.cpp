#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  const int X_SIZE = 5;
  const int Y_SIZE = 4;

  int array2D[Y_SIZE][X_SIZE];
  int xPos = 0;
  int yPos = 0;

  // Input
  while (yPos < Y_SIZE) {
    // Input at X position
    cout << "\nEnter a positive number for row " << yPos + 1 << " value " << xPos + 1 <<endl;
    cin >> array2D[yPos][xPos];
    xPos++;
    // Change Y position when done with row; Reset X position
    if (xPos == X_SIZE) {
      yPos++;
      xPos = 0;
    }
  }

  // Output
  for (int i = 0; i < Y_SIZE; i++)
  {
    cout << endl;
    for (int j = 0; j < X_SIZE; j++)
    {
      cout << array2D[i][j] << " ";
    }
  }

  cout << endl;

  return 0;
}
