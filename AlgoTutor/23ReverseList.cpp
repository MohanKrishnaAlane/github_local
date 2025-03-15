#include<iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;
    ListNode(int x)
    {
        data = x;
        next = nullptr;
    }
};

ListNode* reverse(ListNode* head)
{
    if(head == nullptr || head->next == nullptr)
        return head;
    ListNode* h2 = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return h2;
    
}

int main()
{
    ListNode* head = new ListNode(1);
    ListNode* ln2 = new ListNode(2);
    ListNode* ln3 = new ListNode(3);
    ListNode* ln4 = new ListNode(4);
    ListNode* ln5 = new ListNode(5);
    head->next = ln2;
    ln2->next = ln3;
    ln3->next = ln4;
    ln4->next = ln5;
    ListNode* temp = reverse(head);
    cout<<"The reversed list is:";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
    //head->data 
}