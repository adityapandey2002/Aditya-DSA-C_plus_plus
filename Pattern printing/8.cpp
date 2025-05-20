#include <iostream>
using namespace std;
int main()
{
  int row, column;
  for (row = 1; row <= 5; row = row + 1)
  {
    for (column = row; column >= 1; column = column - 1)
    {
      cout << column << " ";
    }
    cout << endl;
  }
}