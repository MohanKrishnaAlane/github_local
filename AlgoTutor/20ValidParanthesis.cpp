#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s = "((){}[]";
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else{
            if(!st.empty())
            {
                if(s[i] == ')' && st.top() =='(')
                    st.pop();
                else if(s[i] == '}' && st.top() =='{')
                    st.pop();
                else if(s[i] == ']' && st.top() =='[')
                    st.pop();
                else 
                {
                    cout<<"not valid";
                    return 0;
                }
            }
            else 
                {
                    cout<<"not valid";
                    return 0;
                }
        }
        
    }
    if(st.empty())
        {
            cout<<"Valid";
            return 0;
        }
    cout<<"Not valid";
    

    return 0;
}