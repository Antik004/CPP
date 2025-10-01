#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
bool display(Node* Head,int x)
{
    Node* head=Head;
        while(head->link!=nullptr)
        {
            cout<<head->data;
            head=head->link;
            if(head->link!=nullptr)
            {
                cout<<"->";
            }
        }
        if(x==0)
        {
            return false;
        }
    return true; 
}

Node* insert(Node* head)
{
    Node* node=new Node();
    cout<<"Enter a number";
    int x;
    cin>>x;
    if(x==0)
    {
        display(head,x);
        exit(0);
    }
    node->data=x;
    node->link=head;
    head=node;
    return head;
}

int main()
{
    cout<<"Linked list insert at beginning"<<endl;

    Node* head=new Node();
    cout<<"Enter any to start inserting....Enter 0 to stop";
    int x;
    cin>>x;
    while(x!=0)
    {
        head=insert(head);
        bool flag=display(head,x);
        if(flag==false)
        {
            break;
        }
    }
}