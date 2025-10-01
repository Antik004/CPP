#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};
void insert(Node* head)
{
    bool flag=true;
    while(flag==true)
    {
        Node* node=new Node();
        int x;
        cout<<"Enter a number--";
        cin>>x;
        node->data=x;
        node->link=nullptr;

        Node* temp=head;
        while(temp->link!=nullptr)
        {
            temp=temp->link;
        }
        temp->link=node;

        cout<<"Enter 0 to stop"<<endl;
        int f;
        cin>>f;
        if(f==0)
        {
            flag=false;
        }
    }
}
void display(Node* head){
    Node* node=head->link; //  we can also first declare then assign the link, but that does some memory leak problems so this one is much more good!!!
    while(node->link!=nullptr)
    {
        cout<<node->data;
        if(node->link!=nullptr)
        {
            cout<<"->";
        }
        node=node->link;
    }
    cout<<node->data; 
}
int main()
{
    Node* head=new Node();
    head->link=nullptr;
    cout<<"Enter 1 to start entering, enter 0 to stop"<<endl;
    int c;
    cin>>c;
    insert(head);
    display(head);
}