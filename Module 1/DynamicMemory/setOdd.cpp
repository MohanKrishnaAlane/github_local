#include <iostream>
void setOdd(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] = -1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
int main()
{
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    setOdd(arr, 5);
}