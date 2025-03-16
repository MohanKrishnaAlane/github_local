/*
std::stable_sort is a function in C++ that sorts elements while maintaining the 
relative order of equal elements. It's included in the <algorithm> header. 
Unlike std::sort, which may reorder equal elements, std::stable_sort ensures stability.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(const std::pair<int,char>& a, const std::pair<int,char>& b)
{
    return a.first < b.first;
}
int main()
{
    std::vector<std::pair<int,char>> vec = {{3, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {2, 'E'}};
    //std::stable_sort(vec.begin(), vec.end(),compare);
    std::stable_sort(vec.begin(),vec.end(),[](const std::pair<int,char>& a, const std::pair<int,char>& b)
    {
        return a.first < b.first;
    });
    for(auto i: vec)
        std::cout << i.first << " " << i.second << endl;
    return 0;
}