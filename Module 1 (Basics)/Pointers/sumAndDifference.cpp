#include<iostream>
void sum_difference(int* value1, int* value2)
{
    int sum = *value1 + *value2;
    int diff = abs(*value1 - *value2);
    *value1 = sum;
    *value2 = diff;
}
int main()
{
    int value1 = 2, value2 = 6;
    sum_difference(&value1,&value2);
    std::cout<<value1<<" "<<value2;
}