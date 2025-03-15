#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestConsecutive(vector<int>& v)
{
    unordered_set<int> seen{v.begin(),v.end()};
    int ans = 0;
    for(auto num : v)
    {
        if(seen.count(num-1))
            continue;
        int len = 1;
        while(seen.count(++num))
            len++;
        ans = max(len,ans);
    }
    return ans;
}
int main()
{
    vector<int> v{100,2,200,4,1,3};
    cout<<longestConsecutive(v)<<"is the size of longest consecutive seq.";
}