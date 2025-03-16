#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    std::vector<int> vec = {1,2,5,3,4};
    auto it = std::is_sorted_until(vec.begin(),vec.end());
    cout<<"vector is sorted till index: "<<*it<<endl;
    return 0;
}