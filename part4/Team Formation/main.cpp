#include <iostream>

using namespace std;

struct node
{

    int skill;
    node *next;
};
class QUEUE
{
    node *head,*tail;
public:
    QUEUE(){head=tail=NULL}
    void Insert();
    void Delete();
    void Display();


};
void QUEUE::Insert()
{
    node *temp=new node;
    if(temp==NULL)
    {
        cout<<"cannot allocate memory";
        return;
    }
    cin>>temp->skill;
    tail->next=temp;
    if(head==NULL)
        head=temp;
    else
        temp->next=NULL;
    tail=temp;
}

void QUEUE::Delete()
{
    if(head==NULL)
    {
        cout<<"Queue is empty";
        return;
    }
    node *temp;
    if(head==tail)
        rear=NULL;
    head=head->next;
    delete temp;
    cout<<"deleted";

}

void QUEUE::Display()
{
    if(head==NULL)
    {
        cout<<"Queue empty";
        return;
    }
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->skill<<endl;
        temp=temp->next;
    }
}

{

    if(head==NULL)
        cout<<"Queue empty";

    for(int i=0;i<n;i++)
        if(

}


int main()
{
    cout << "Hello world!" << endl;
    QUEUE Harsh;
    cout<<"enter the total number of people";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        Harsh.Insert();


    return 0;
}
