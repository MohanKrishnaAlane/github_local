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
ListNode* Merge(ListNode* list1, ListNode* list2)
{
    if(!list1)
        return list2;
    if(!list2)
        return list1;
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    while(list1 && list2)
    {
        if(list1->data < list2->data)
        {
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    return dummy->next;

}
int main()
{
    ListNode* list1 = new ListNode(1);
    ListNode* list2 = new ListNode(1);
    ListNode* l12 = new ListNode(3);
    ListNode* l13 = new ListNode(5);
    ListNode* l22 = new ListNode(2);
    ListNode* l23 = new ListNode(4);
    list1->next = l12;
    l12->next = l13;
    list2->next = l22;
    l22->next = l23;
    ListNode* res = Merge(list1,list2);
    cout<<"Merged lists are:";
    while(res)
    {
        cout<<res->data<<" ";
        res = res->next;
    }
    return 0;
}