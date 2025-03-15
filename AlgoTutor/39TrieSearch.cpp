#include<iostream>
using namespace std;
class TrieNode
{
public:
    char value;
    TrieNode* character[26] = {nullptr};
    bool terminate;
    TrieNode(int value)
    {
        this->value = value;
        terminate = false;
    }
};
class Trie
{
public:
    TrieNode* root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    TrieNode* insert(TrieNode* root,string word)
    {
        if(word.length() == 0)
        {
            root->terminate = true;
            return root;
        }
        int index = word[0] - 'a';
        if(root->character[index])
            return root->character[index];
        else
        {
            TrieNode* temp = new TrieNode(word[0]);
            root->character[index] = temp;
            temp = root->character[index];
            insert(temp,word.substr(1));
        }
    }
    bool search(TrieNode* root, string word)
    {
        if(word.length() == 0)
            return root->terminate;
        int index = word[0] - 'a';
        if(root->character[index])
            return search(root->character[index],word.substr(1));
        return false;
    }
    bool starts_with(TrieNode* root, string pre)
    {
        if(pre.length() == 0)
            return true;
        int index = pre[0] - 'a';
        if(root->character[index])
            return starts_with(root->character[index],pre.substr(1));
        return false;
    }
};
int main()
{
    Trie t;
    t.insert(t.root,"apple");
    cout<<t.starts_with(t.root,"appl")<<"is found on the trie";
    return 0;
}