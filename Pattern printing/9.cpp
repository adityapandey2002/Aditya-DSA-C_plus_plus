#include <iostream>
using namespace std;

int main()
{
  int row, column;
  for (row = 1; row <= 5; row = row + 1)
  {
    for (column = 1; column <= row; column = column + 1)
    {
      char name = 'a' + row - 1;
      cout << name << " ";
    }
    cout << endl;
  }
}