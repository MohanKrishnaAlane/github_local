#include<iostream>
#include<cmath>
int main()
{
    int size = 10;
    int *arr = new int[size];
    for(int i=0;i<10;i++)
    {
        arr[i] = rand() % 100;
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum += arr[i];
    }
    float mean = sum/size;
    float stDev = 0;
    for(int i=0;i<size;i++)
    {
        stDev += pow(arr[i] - mean,2);
    }
    stDev = sqrt(stDev/size);
    std::cout<<"mean: "<<mean<<std::endl;
    std::cout<<"st. deviation: "<<stDev;
}