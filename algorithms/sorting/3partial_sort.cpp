/*
std::partial_sort is a function in C++ that sorts only a portion of a range, 
ensuring that the smallest (or largest) k elements are sorted, while the rest remain unordered. 
This is useful when you only need the top k elements instead of fully sorting the array.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec = {7, 3, 9, 1, 5, 8, 6, 2, 4};
    std::partial_sort(vec.begin(), vec.begin() + 3, vec.end(),std::less<int>());
    for(auto i: vec)
        std::cout << i << " ";
    return 0;
}