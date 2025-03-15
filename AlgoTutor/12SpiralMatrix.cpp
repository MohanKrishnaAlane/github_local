#include<iostream>
#include<vector>
using namespace std;
int main()
{
    std::vector<std::vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9}};
    int sr = 0, sc = 0, er = matrix.size()-1, ec = matrix[0].size()-1;
    std::vector<int> v;
    while(sr <= er && sc <= ec)
    {
        for(int i=sc; i<=ec && sr<= er;i++ ){
            v.push_back(matrix[sr][i]);
        }
        sr++;
        for(int i=sr; i<= er && sc <= ec;i++)
        {
            v.push_back(matrix[i][ec]);
        }
        ec--;
        for(int i=ec;i>=sc && sr<=er;i--)
        {
            v.push_back(matrix[er][i]);
        }
        er--;
        for(int i=er;i>=sr && sc <= ec;i--)
        {
            v.push_back(matrix[i][sc]);
        }
        sc++;

    }
    for(auto i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}