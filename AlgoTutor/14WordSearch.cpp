#include<iostream>
#include<vector>
using namespace std;
std::vector<std::vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
bool searchWord(int i, int j,vector<vector<char>> &board,int k, string word)
{
    if(k == word.size())
    {
        return true;
    }
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k])
        return false;
    char temp = board[i][j];
    board[i][j] = '#';
    for( auto dir : directions)
    {
        if(searchWord(i+dir[0],j+dir[1],board,k+1,word))
            return true;
    }
    board[i][j] = temp;
    return false;
}
bool exist(vector<vector<char>> &board, string word)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[0].size();j++)
        {
            if(searchWord(i,j,board,0,word))
                return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    cout<<"word presence is "<<exist(board, word);
    return 0;
}