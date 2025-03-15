#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s = "anagram", t = "nagaram";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<(s == t)<<" that strings are anagram";
}