#include <iostream>
#include <memory> // For std::shared_ptr
using namespace std;
class Node
{
public:
    int value;
    shared_ptr<Node> next;
    Node(int val)
    {
        value = val;
    }
    /*Node(shared_ptr<Node> obj)
    {
        next = obj;
    }*/
};

int main() {
    shared_ptr<Node> node1 = std::make_shared<Node>(10); //1
    shared_ptr<Node> node2 = std::make_shared<Node>(20); //2
    shared_ptr<Node> node3 = std::make_shared<Node>(30); //2
    shared_ptr<Node> node4 = std::make_shared<Node>(40); //2
    node1->next = node2; //2
    node2->next = node3; 
    node3->next = node4;
    node4->next = nullptr;
    while(node1)
    {
        cout<<node1->value <<" values being printed";
        node1 = node1->next;
    }
    //10->20->30->40
    return 0;
}
