#include <iostream>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    int *arr = nullptr;
    int size = 5;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
    printArray(arr, size);
    int *resizeArr = nullptr;
    resizeArr = new int[size + 2];
    for (int i = 0; i < size; i++)
    {
        resizeArr[i] = arr[i];
    }
    resizeArr[size] = size;
    resizeArr[size + 1] = size + 1;
    delete[] arr;
    arr = resizeArr;
    printArray(arr, size + 2);
    return 0;
}