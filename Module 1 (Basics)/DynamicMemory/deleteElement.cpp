#include <iostream>
void deleteElement(int *&arr, int size, int index)
{
    int *newArr = new int[size - 1];
    for (int i = 0; i < size; i++)
    {
        if (i == index || i > index)
            newArr[i] = arr[i + 1];
        else
            newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}
int main()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    deleteElement(arr, 5, 3);
    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i] << " ";
    }
}