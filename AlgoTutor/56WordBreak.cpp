#include<iostream>
#include<vector>
#include<limits.h>
#include<cstring>
#include<unordered_set>
using namespace std;
int sz;
bool WordBreak(int i,string& s, unordered_set<string>& dic,vector<int>& dp)
{
    if(i==s.length())
        return true;
    if(dp[i] != -1)
        return dp[i];
    string temp;
    for(int j=i;j<sz&&j<s.size();j++)
    {
        temp = temp + string(1,s[j]);
        if(dic.find(temp) != dic.end() && WordBreak(j+1,s,dic,dp))
            return (dp[i] = true);     
    }
    return (dp[i] = false);
}
int main()
{
    string s = "aaab";
    vector<string> dict{"a","aa","aaa"};
    unordered_set<string> dic(dict.begin(),dict.end());
    for(auto s : dict)
    {
        sz = std::max(sz,(int)s.size());
    }
    int n = s.length();
    vector<int> dp(n,-1);
    cout<<WordBreak(0,s,dic,dp)<<" given word doesn't match";
    return 0;
}