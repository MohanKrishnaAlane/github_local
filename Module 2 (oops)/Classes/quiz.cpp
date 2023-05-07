#include <iostream>
using namespace std;

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    static int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    // Attempt to modify array
    arr[0] = 10;

    cout << "Modified array: ";
    printArray(arr, size);

    return 0;
}
