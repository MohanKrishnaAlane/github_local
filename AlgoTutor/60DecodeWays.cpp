#include<iostream>
#include<vector>
#include<string>
using namespace std;
int DecodeWays(string& s)
{
    int n = s.length()+1;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        int onedigit = s[i-1] - '0';
        int twodigit = std::stoi(s.substr(i-2,2));
        if(onedigit != 0)
            dp[i] += dp[i-1];
        if(twodigit >= 10 && twodigit <= 26)
            dp[i] += dp[i-2];
    }
    return dp[n];
}
int main()
{
    string s = "12341";
    cout<<DecodeWays(s)<<" ways can be decoded";
    return 0;
}