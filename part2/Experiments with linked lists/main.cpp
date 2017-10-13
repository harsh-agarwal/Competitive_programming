#include <iostream>

using namespace std;

struct Node
  {
     int data;
     Node *next;
  };
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *temp=new Node;
    temp->data=data;

    Node *temp2=new Node;
    temp2=head;int count1=1;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
    }

    else{
            while((temp2->next)!=NULL)
    {
        count1++;
        temp2=temp2->next;
    }
    if(position==count1)
    {
        temp->next=NULL;
        temp2->next=temp;
    }
    else
    {
        temp2=head;
        while(position-1)
        {
            temp2=temp2->next;
            position--;
        }
        temp->next=temp2->next;
        temp2->next=temp;

    }
    }
    return(head);

}

void printLinkedList(Node *head)
{
    Node *temp=new Node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

int main()
{
    cout << "Hello world!" << endl;

    Node *(Harsh_head);
    Harsh_head=NULL;
    int t=1;
    cout<<"Please enter the value to be entered and the position at which they will be entered"<<endl;
    while(t==1)
    {
        int i,p;

        cin>>i>>p;
        //InsertNth(Node *head, int data, int position)
        Harsh_head=InsertNth(Harsh_head,i,p);
        cout<<"task done successfully"<<endl;
        cout<<"press 1 to continue and any other key to exit";
        cin>>t;
    }
    printLinkedList(Harsh_head);

    return 0;
}
