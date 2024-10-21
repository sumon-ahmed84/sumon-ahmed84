#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node* next;
};

node* start=NULL;

node* create(int num)//Create function to create a node.
{
    node* ptr;
    ptr= new node;
    if(ptr==NULL)
        exit(1);
    else
    {
        ptr->data=num;
        ptr->next=NULL;
        return ptr;
    }
}
void insert_end(node* p)
{
    node* q=start;
    if(start==NULL)
        start=p;
    else
    {
        while(q->next!=NULL)
        q=q->next;
    q->next=p;
    }
}
void display(node* p)
{
    node* temp=p;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    node* ptr;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int data;
        cin>>data;
        ptr=create(data);
        insert_end(ptr);
    }
    display(start);
}
