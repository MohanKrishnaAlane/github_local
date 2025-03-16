/*
std::is_sorted checks whether a range is sorted in ascending or custom order.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec = {7, 3, 9, 1, 5, 8, 6, 2, 4};
    std::sort(vec.begin(), vec.end(),std::less<int>());
    if(std::is_sorted(vec.begin(), vec.end(),std::less<int>()))
        std::cout << "The vector is sorted" << endl;
    else
        std::cout << "The vector is not sorted" << endl;
    return 0;
}