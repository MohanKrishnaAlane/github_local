#include<iostream>
#include<unordered_map>
#include<limits.h>
using namespace std;
int main()
{
    string s = "ADOBECODEBANC", t = "ABC";
    char c = s[13];
    int required = t.size();
    std::unordered_map<char,int> remaining;
    for(auto i : t)
    {
        remaining[i]++;
    }
    int left = 0,right=0,start=0,min=INT_MAX;
    while(right < s.size() && start < s.size())
    {
        if(required)
        {
            remaining[s[right]]--;
            if(remaining[s[right]] >= 0)
                required--;
            right++;
        }
        else{
            remaining[s[left]]++;
            if(remaining[s[left]] > 0)
                required++;
            if(min > right - left)
            {
                min = std::min(right - left,min);
                start = left;
            }
            left++;
        }
    }
    while(!required)
    {
        if(++remaining[s[left]] > 0)
            required++;
        if(min > right - left)
        {
            min = std::min(right - left,min);
            start = left;
        }
        left++;
    }
    cout<<s.substr(start,min);
}