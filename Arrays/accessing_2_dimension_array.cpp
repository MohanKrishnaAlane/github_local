#include <iostream>

using namespace std;

int main() {
// Initialize row and column index 
  int row = 3 , column = 3;
// Initialize static 2D array
  int Student[row][column] = {{100, 134, 234}, {34, 189, 221}, {109, 139, 56}};

  //Print static 2D Array 
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
    // Access element at row index i and column index j
       cout << Student[i][j] << " ";
  }
  cout << endl;
  }

}