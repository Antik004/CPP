
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;
struct Node* getNewNode(int x)
{
    struct Node* node = new struct Node();
    node->data=x;
    node->prev=NULL;
    node->next=NULL;
    return node;
}
void insertAtBeg(int x){
    struct Node* newNode=getNewNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode; 
}
void printForward()
{
    struct Node* temp=head;
    if (temp==NULL)
    {
        return;
    }
    cout<<"Forward"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void revPrint()
{
    struct Node* temp=head;
    if(temp==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<"Reverse"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
    head=NULL;
    insertAtBeg(2);
    insertAtBeg(10);
    insertAtBeg(90);
    printForward();
    revPrint();
}