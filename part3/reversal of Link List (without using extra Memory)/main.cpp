#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node* push(node *head,int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
    //delete temp;
    return(head);
}

node* insert_at_end(node *head,int data)
{
    node *temp=new node;
    temp->data=data;
    node *tail=new node;
    tail=head;
    if(tail==NULL)
    {
        temp->next=NULL;
        head=temp;
    }
    else
        {
        while((tail->next)!=NULL)
        {tail=tail->next;}
        tail->next=temp;
        temp->next=NULL;
        }//head->next=temp;
    //delete(tail);//temp->next=NULL;
    //tail=temp;
    return(head);
}


node* pop(node *head)
{
    node* temp=new node;
    if(head==NULL)
     {
         cout<<"no element";
         return(head);
     }
    else{
        temp=head;
        head=head->next;
        delete temp;
        return(head);
        }
}

node* reversal_of_linked_list(node *head)
{
    //int i=0;
    node *current;
    current=head;
    node *agla;
    agla=head->next;
    node *previous;
    previous=NULL;
    while((agla)!=NULL)
    {
        agla=current->next;
        current->next=previous;
        previous=current;
        current=agla;
    }

    return(previous);
}
int main()
{
    cout << "Hello world!" << endl;
    node *(harsh_head)=new node;
    harsh_head=NULL;
    harsh_head=push(harsh_head,2);
    harsh_head=push(harsh_head,3);
    harsh_head=push(harsh_head,4);
    harsh_head=push(harsh_head,5);
    harsh_head=push(harsh_head,6);
    //harsh_head=pop(harsh_head);
    //harsh_head=insert_at_end(harsh_head,2);
    //harsh_head=insert_at_end(harsh_head,3);
    //harsh_head=insert_at_end(harsh_head,4);
    //harsh_head=insert_at_end(harsh_head,1);
    node *temp=new node;
    temp=harsh_head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    temp=reversal_of_linked_list(harsh_head);
   // cout<<"Harsh";
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    delete(temp);
    return 0;
}
