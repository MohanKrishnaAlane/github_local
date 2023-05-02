#include<iostream>
using namespace std;
int main()
{
    int currentSum = 0;
    int relocationCount = 0;
    int arr[5] = {10,-10,-1,-1,10};
    for(int i=0;i<5;i++)
    {
        int temp = currentSum + arr[i];
        if(temp < 0 && arr[i]<0)
        {
            int j = i;
            while(j < 5 - 1 && arr[j+1]<0)
            {
                
            }
        }
    }
}