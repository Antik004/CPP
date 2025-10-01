#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* insert(Node *head,int x)
{
    Node* node=new Node();
    node->data=x;
    node->link=nullptr;

    if(head==nullptr)
    {
        head=node;
    }
    else{
        Node* ptr=head;
        while(ptr->link!=nullptr)
        {
            ptr=ptr->link;
        }
        ptr->link=node;
    }
    return head;
}

void insertatMid(Node*& head,int mid,int val)
{
    int c=0;
    Node* node=new Node();
    node->link=nullptr;
    node->data=val;

    if(head==nullptr)
    {
        cout<<"List was found empty so only 1 element in list irrespective of position"<<endl;
        head=node;
    }
    else{
        Node* ptr=head;
        while(ptr->link!=nullptr)
        {
            if(c==mid)
            {
                node->link=ptr->link;
                ptr->link=node;
                break;
            }
            else{
                ptr=ptr->link;
                c++;
            }
        }
    }
}
void display(Node* k)
{
    if(k==nullptr)
    {
        cout<<"Empty linked list"<<endl;
        return;
    }
    while(k->link!=nullptr)
    {
        cout<<k->data<<"->";
        k=k->link;
    }
    cout<<k->data;
}
int main()
{
    Node* head=nullptr;
    Node* k=head;
    cout<<"Enter the number of terms"<<endl;
    int n;
    cin>>n;

    while(n>0)
    {
        cout<<"Enter a number"<<endl;
        int x;
        cin>>x;
        head=insert(head,x);
        n--;
    }
    display(head);

    cout<<"Enter the index after which you want to enter a new number"<<endl;
    int mid;
    cin>>mid;
    cout<<"Enter the value to be present at that position"<<endl;
    int val;
    cin>>val;
    insertatMid(head,mid,val);
    display(head);
}