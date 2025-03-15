#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val = val;
        next = nullptr;
    }
};
ListNode* mergeKLists(vector<ListNode*>& lists)
{
    if(lists.size() == 0)
        return nullptr;
    priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> pq; 
    for(auto l : lists)
    {
        pq.push({l->val,l});
    }
    ListNode* root = pq.top().second;
    pq.pop();
    ListNode* curr = root;
    if(curr->next){
        pq.push({curr->next->val,curr->next});
        //curr = curr->next;
    }
    while(!pq.empty())
    {
        ListNode* temp = pq.top().second;
        curr->next = temp;
        pq.pop();
        if(temp->next)
            pq.push({temp->next->val,temp->next});
        curr = curr->next;
    }
    return root;
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
    ListNode* result = mergeKLists(lists);
    while(result)
    {
        cout<<result->val<<" ";
        result = result->next;
    }
    return 0;

}