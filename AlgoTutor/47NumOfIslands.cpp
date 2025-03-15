#include<iostream>
#include<vector>
using namespace std;
void removeIslands(int i,int j, vector<vector<char>>& grid)
{
    int m=grid.size(),n=grid[0].size();
    if(i<0||i==m||j<0||j==n||grid[i][j]=='0')
        return;
    grid[i][j] = '0';
    removeIslands(i+1,j,grid);
    removeIslands(i,j+1,grid);
    removeIslands(i,j-1,grid);
    removeIslands(i-1,j,grid);
}
int numberOfIslands(vector<vector<char>> &grid)
{
    int m=grid.size(), n=grid[0].size(), islands = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j] == '1')
            {
                islands++;
                removeIslands(i,j,grid);
            }
        }
    }
    return islands;
}
int main()
{
    vector<vector<char>> grid =  {  {'1','1','1','1','0'},
                                    {'1','1','0','1','0'},
                                    {'1','1','0','0','0'},
                                    {'0','0','0','0','0'}
                                    };
    cout<<numberOfIslands(grid)<<" is the count of islands";
    return 0;
    
}