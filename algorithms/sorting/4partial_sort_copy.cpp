/*
std::partial_sort_copy is similar to std::partial_sort, 
but instead of sorting in-place, it copies the sorted elements into a separate container.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec = {7, 3, 9, 1, 5, 8, 6, 2, 4};
    std::vector<int> dest(5);
    std::partial_sort_copy(vec.begin(), vec.end(),dest.begin(),dest.end(),std::less<int>());
    for(auto i: dest)
        std::cout << i << " ";
    return 0;
}