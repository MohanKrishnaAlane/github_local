// If we are initializing an array in the declaration step,
// we don’t need to specify the size of the array.
// The compiler automatically determines its size.
#include <iostream>
using namespace std;
int main()
{
    int RollNumber[5];
    RollNumber[0] = 1;
    RollNumber[1] = 2;
    RollNumber[2] = 3;
    RollNumber[3] = 4;
    RollNumber[4] = 5;
    int RollNumberA[5] = {1, 2, 3, 4, 5};
    int RollNumberB[] = {1, 2, 4, 5, 5};
    int RollNumberC[5] = {1, 2};
}