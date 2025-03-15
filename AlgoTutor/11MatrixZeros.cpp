#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    //int arr[3][3] = {1,1,1,1,0,1,1,1,1};
    std::vector<std::vector<int>> arr = { {1,1,1},{1,0,1},{1,1,1}};
    std::set<int> rowset;
    std::set<int> colset;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j] == 0)
            {
                rowset.insert(i);
                colset.insert(j);
            }
        }
    }
    for(auto i : rowset)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j] = 0;
        }
    }
    for(auto i : colset)
    {
        for(int j=0;j<3;j++)
        {
            arr[j][i] = 0;
        }
    }
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(rowset.count(i) > 0 || colset.count(j) > 0)
            {
                arr[i][j] = 0;
            }
        }
        cout<<endl;
    }
    for(auto i : arr)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}