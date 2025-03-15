#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;
string AlienOrder(vector<string>& words)
{
    unordered_map<char,unordered_set<char>> suc,prev;
    unordered_set<char> chars;
    string s;
    for(auto t : words)
    {
        chars.insert(t.begin(),t.end());
        if(s.size() > t.size() && s.substr(0,t.size()-1) == t) return "";
        for(int i=0;i<min(s.size(),t.size());i++)
        {
            if(s[i] != t[i])
            {
                suc[s[i]].insert(t[i]);
                prev[t[i]].insert(s[i]);
                break;
            }
        }
        s = t;
    }
    unordered_set<char> mq(chars);
    for(auto p : prev)
        mq.erase(p.first);
    string res;
    while(!mq.empty())
    {
        auto c = *(mq.begin());
        mq.erase(c);
        res += c;
        for(auto a : suc[c])
        {
            prev[a].erase(c);
            if(prev[a].empty())
                mq.insert(a);
        }
    }
    return res.length() == chars.size() ? res : "";
}
int main()
{
    vector<string> words{"wrt","wrf","er","ett","rftt"};
    cout<<AlienOrder(words)<<" is the order";
    return 0;
}