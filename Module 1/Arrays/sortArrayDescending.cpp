#include <iostream>
using namespace std;
void sort_elements_desc1(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        int min = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << endl;
}
void sort_elements_desc2(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int max = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[max] < arr[j])
            {
                max = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
    cout << endl;
}
int main()
{
    int arr1[] = {2, 4, 1, 3, 5};
    sort_elements_desc1(arr1, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    int arr2[] = {2, 4, 3, 5, 1};
    sort_elements_desc2(arr2, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
}