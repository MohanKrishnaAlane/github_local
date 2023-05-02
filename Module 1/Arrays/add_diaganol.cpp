#include <iostream>
using namespace std;
int add_diagonal(int arr[3][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                sum += arr[i][i];
        }
    }
    return sum;
}
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << add_diagonal(arr, 3, 3);
}