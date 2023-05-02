#include <iostream>
using namespace std;
void leftRotate(int aArr[], int aSize)
{
    int aTemp = aArr[0];
    for (int i = 0; i < aSize - 1; i++)
    {
        aArr[i] = aArr[i + 1];
    }
    aArr[aSize - 1] = aTemp;
}
int main()
{
    int aArr[] = {1, 2, 3, 4, 5};
    leftRotate(aArr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << aArr[i] << " ";
    }
    return 0;
}