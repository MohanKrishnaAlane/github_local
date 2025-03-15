#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode* mergeKLists(vector<ListNode*>& lists)
{
    if(lists.size() == 0)
        return nullptr;
    priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> pq;
    ListNode* dummyHead = new ListNode(-1);
    ListNode* dummyTail = dummyHead;
    for(auto head : lists)
    {
        if(head)
            pq.push({head->val, head});
    }
    while(!pq.empty())
    {
        ListNode* minNode = pq.top().second;
        pq.pop();
        if(minNode->next)
            pq.push({minNode->next->val, minNode->next});
        dummyTail->next = minNode;
        dummyTail = dummyTail->next;
    }
    return dummyHead->next;
}
int main()
{
    ListNode a(1),b(4),c(7);
    ListNode d(2),e(5),f(8);
    ListNode g(3),h(6),i(9);
    a.next = &b;b.next=&c;
    d.next = &e;e.next=&f;
    g.next = &h;h.next=&i;
    vector<ListNode*> lists { &a,&d,&g};
    ListNode* res = mergeKLists(lists);
    cout<<"After merge : ";
    while(res)
    {
        cout<<res->val<<" ";
        res = res->next;
    }
    return 0;
}