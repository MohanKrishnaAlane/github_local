#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    std::string s = "AAAABCACACCCC";
    int k = 2;
    int left=0,right=0,ans=0,maxf=0;
    std::unordered_map<char,int> alphabets;
    for(;right<s.length();right++)
    {
        alphabets[s[right]] = 1 + alphabets[s[right]];
        maxf = max(maxf,alphabets[s[right]]);
        if((right - left + 1) - maxf > k)
        {
            alphabets[s[left]] -= 1;
            left++;
        }
        else
        {
            ans = max(ans,right - left + 1);
        }
    }
    cout<<"Max length after replacing k:"<<ans;
    return 0;
}