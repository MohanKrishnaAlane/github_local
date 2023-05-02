#include <iostream>
using namespace std;
void print_array(const int iArray[], const int &iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        cout << iArray[i] << " ";
    }
    cout << endl;
}
void modify_array(int ioArray[], const int &iSize)
{
    for (int i = 0; i < iSize; i++)
    {
        if (ioArray[i] < 50)
            ioArray[i] = -1;
    }
}
int main()
{
    // Initialize size of an array
    int size = 8;
    // Initialize values of array
    int number[size] = {67, 89, 56, 43, 29, 15, 90, 67};

    cout << "Values of array before function call:" << endl;
    // Call print_array function
    print_array(number, size);
    // Call modify_array function
    modify_array(number, size);
    cout << "Values of array after function call:" << endl;
    // Call print_array function
    print_array(number, size);
}