/*
If we initialize an array with elements fewer than its total size,
it automatically initializes the remaining elements with their default values.
*/
/*
When initializing a 2-D array, specifying the first dimension is optional.
The compiler will infer the number of rows from the statement.
changing Student[3][3] to Student[][3] is fine, but either Student[][] or
Student[3][] isn’t valid.
*/
#include <iostream>
using namespace std;
int main()
{
    int studentA[2][2];
    studentA[0][0] = 1;
    studentA[0][1] = 2;

    studentA[1][0] = 3;
    studentA[1][1] = 4;

    int studentB[][2] = {{1, 2}, {3, 4}};
}


