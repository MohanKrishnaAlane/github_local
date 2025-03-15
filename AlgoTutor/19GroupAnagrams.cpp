#include<iostream>
#include<vector>
#include<unordered_map>
#include<sstream>
using namespace std;
string getSignature(const string& str)
{
    vector<char> count(26,0);
    for(auto c : str)
    {
        count[c-'a']++;
    }
    stringstream ss;
    for(int i=0;i<26;i++)
    {
        if(count[i] != 0)
        {
            ss<<(char)(i+'a')<<count[i];
        }
    }
    return ss.str();
}
int main()
{
    vector<string> anagram = {"tea","eat","bat","ate","tan","nat"};
    vector<vector<string>> result;
    unordered_map<string,vector<string>> groups;
    for(const auto& s : anagram)
    {
        groups[getSignature(s)].push_back(s);
    }
    for(auto s : groups)
    {
        for (auto t : s.second)
        {
            cout<<t<<" ";

        }
        cout<<endl;
    }

    return 0;
}