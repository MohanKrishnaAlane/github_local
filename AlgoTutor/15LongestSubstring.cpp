#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string str = "abccdcba";
    unordered_map<char,int> mp;
    int left = 0, right = 0;
    int ans = 0;
    for(int right = 0;right<str.size();right++)
    {
        auto i = mp.find(str[right]);
        if(i != mp.end() && i->second >= left)
        {
            left = i->second + 1;
        }
        ans = max(ans, right - left + 1);
        mp[str[right]] = right;
    }
    cout<<"max string size is "<<ans;
    return 0;
}