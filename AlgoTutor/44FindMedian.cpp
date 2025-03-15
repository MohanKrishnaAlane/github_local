#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> minHeap;
priority_queue<int> maxHeap;
void add(int num)
{
    if(maxHeap.size() == 0 or maxHeap.top() > num)
    {
        maxHeap.push(num);
    }
    else{
        minHeap.push(num);
    }
    if(maxHeap.size() > minHeap.size() + 1)
    {
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }
    if(minHeap.size() > maxHeap.size() + 1)
    {
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
}
double Median()
{
    if(maxHeap.size() == minHeap.size())
    {
        if(maxHeap.size() == 0)
        {
            return 0.0;
        }
        else{
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
    }
    else
    {
        return maxHeap.size() > minHeap.size() ? maxHeap.top() : minHeap.top();
    }
}
int main()
{

    add(1);
    add(2);
    add(3);
    add(4);

    cout<<Median()<<" is the mean";
}
