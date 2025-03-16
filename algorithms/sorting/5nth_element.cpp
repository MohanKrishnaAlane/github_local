/*
std::nth_element rearranges a range so that the element at the n-th position 
is sorted correctly, while elements before it are less than or equal to it, 
and elements after it are greater than or equal to it. However, it does not fully sort the range.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec = {7, 3, 9, 1, 5, 8, 6, 2, 4};
    std::nth_element(vec.begin(),vec.begin()+3,vec.end());
    std::cout << "The fourth element is: " << vec[3] << endl;
    //for(auto i: vec)
    //    std::cout << i << " ";
    return 0;
}