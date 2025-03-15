#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x)
    {
        val =x;
        next = nullptr;
    }
};
ListNode* removeNth(ListNode* head,int k)
{
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* slow = dummy;
    ListNode* fast = dummy;
    for(int i=0;i<=k;i++)
    {
        fast = fast->next;
    }
    if(!fast)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while(fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    ListNode* toBeDeleted = slow->next;
    slow->next = slow->next->next;
    delete toBeDeleted;
    return dummy->next;
}
int main()
{
    ListNode a(1),b(2),c(3),d(4),e(5),f(6),g(7);
    a.next = &b;b.next=&c;c.next=&d;d.next=&e;e.next=&f;f.next=&g;
    ListNode* res = removeNth(&a,3);
    cout<<"After removal";
    while(res)
    {
        cout<<res->val<<" ";
        res=res->next;
    }
}   