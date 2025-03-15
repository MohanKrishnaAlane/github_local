/*
#include<iostream>
#include<vector>
#include<string_view>
using namespace std;
string IntToString(int n)
{
    string result;
    for(int i=0;i<4;i++)
    {
        unsigned char c = (n >> (i*8)) & 0xFF;
        result.push_back(static_cast<char>(c));
    }
    return result;
}
string encode(vector<string> &strs)
{
    string result;
    for(auto s : strs)
    {
        int n = s.size();
        result += IntToString(n);
        result += s;
    }
}
int StringToInt(string s)
{
    int result;
    for(int i=0;i<4;i++)
    {
        unsigned char c = s[i] << (i*8);
        result += static_cast<char>(c);
    }
    return result;
}
string decode(string_view s)
{
    string result;
    int i=0;
    while(i < s.size())
    {
        int len = StringToInt(s.substr(i,4));
        i += 4;
        result += s.substr(i,len);
    }
    return result;
}
int main()
{
    vector<string> strs = {"Hello","world"};
    string s = encode(strs);
    cout<<decode(s);
    return 0;
}
*/