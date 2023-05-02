#include <iostream>
using namespace std;
double average_marks(const double iMarks[], int iSize)
{
    int aAverage = 0;
    for (int i = 0; i < iSize; i++)
    {
        aAverage += iMarks[i];
    }
    return aAverage / iSize;
}
int main()
{
    double aMarks[] = {10, 20, 30, 40, 50};
    cout << average_marks(aMarks, 5);
}