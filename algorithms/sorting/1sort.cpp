/*
std::sort is a function in the C++ Standard Library used to sort elements in a range
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a < b;
}
int main()
{
    std::vector<int> vec = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    //std::sort(vec.begin(), vec.end(),std::less<int>());
    std::sort(vec.begin(), vec.end(),compare);
    for(auto i: vec)
        std::cout << i << " ";
    return 0;
}