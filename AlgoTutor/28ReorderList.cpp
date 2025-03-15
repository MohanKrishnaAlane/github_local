#include<iostream>
#include<vector>
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
void Reorder(ListNode* head)
{
    ListNode* curr = head;
    vector<ListNode*> v;
    int n=0,i=0;
    while(curr)
    {
        v.push_back(curr);
        curr = curr->next;
        n++;
    }
    for(;i<n/2;i++)
    {
        if(i==0)
        {
            curr = v[i];
            curr->next = v[n-i-1];
            curr = curr->next;
        }
        else
        {
            curr->next = v[i];
            curr = curr->next;
            curr->next = v[n-i-1];
            curr = curr->next;
        }
    }
    if(n%2)
    {
        curr->next = v[i];
        curr=curr->next;
    }
    curr->next = nullptr;
    return;
}
int main()
{
    ListNode a(1),b(2),c(3),d(4),e(5);
    a.next = &b;b.next=&c;c.next=&d,d.next=&e;
    Reorder(&a);
    ListNode* head = &a;
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}