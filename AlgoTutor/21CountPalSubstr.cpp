#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "abcbad";
    int n = s.size();
    int ans = 0;
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    for(int i=0;i<n;i++)
    {
        dp[i][i] = true;
        ans++;
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == s[i+1]){
        dp[i][i+1] = true;
        ans++;
        }
    }
    for(int len = 3;len<=3;len++)
    {
        for(int i=0;i<n-len+1;i++){
            if(s[i] == s[i+len-1] && dp[i+1][i+len-2]){
                dp[i][i+len-1] = true;
                ans++;
            }
        }
    }
    cout<<"Total palindromic substrs"<<ans;
    return 0;
}