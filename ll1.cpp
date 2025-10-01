#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link; // is a pointer or the link which we have to connect to another node
};
void display(Node *head){
    Node* node=head;
    while(node!=nullptr)
    {
        cout<<node->data;
        if(node->link!=nullptr)
        {
            cout<<"->";
        }
        node=node->link;
    }
    cout<<endl;
}
int main()
{
    Node* head=new Node();// here we created a head node or the first node of the linked list.
    Node* block=new Node();
    Node* block2=new Node();

    // head=nullptr;// when the linked list is empty the pointer will point to nowhere  thats why its null now
    head->data=0;
    (*head).link=block;

    block->data=2;
    block->link=block2; //we can use (*block)or block-> to dereference i.e access the contents of that structure
    
    block2->data=4;
    block2->link=nullptr;

    display(head);
}