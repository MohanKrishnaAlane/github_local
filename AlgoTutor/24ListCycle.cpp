#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;
    ListNode(int x)
    {
        x = data;
        next = nullptr;
    }
};
bool hasCycle(ListNode* head)
{
    ListNode* fast = head, *slow = head;
    while(fast != nullptr && fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
            return true;
    }
    return false;

}
int main()
{
    ListNode* head = new ListNode(1);
    ListNode* ln2 = new ListNode(2);
    ListNode* ln3 = new ListNode(3);
    ListNode* ln4 = new ListNode(4);
    ListNode* ln5 = new ListNode(35);
    head->next = ln2;
    ln2->next = ln3;
    ln3->next = ln4;
    ln4->next = ln5;
    ln5->next = ln3;
    cout<<hasCycle(head)<<" that list has cycle";

}