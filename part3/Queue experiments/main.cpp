#include <iostream>

using namespace std;

struct node
{
    int skill;
    node *next;
};
class Harsh
{
    node *head,*tail;
public:
    Harsh(){head=tail=NULL;}
    void Insert();

};
void Harsh::Insert()
{
    node *temp=new node;
    cin>>temp->skill;
    if (tail==NULL)
        tail=temp;
    else temp->next=head;
    head=temp;
}
void Harsh::Sort(Harsh SortWala)
{
   node *refer=new node;
   node *moving=new node;
   refer=head; moving=head;
   int minimum;
   minimum=head->skill;

    while(refer!=NULL)
   {
     while(moving!=NULL)
     {
         minimum>(moving->skill)
           minimum=moving->skill;
           moving=moving->next;
     }
     refer=refer->next;
   }






}
int main()
{
    cout << "Hello world!" << endl;
    Harsh Ankita;
    for(int i=0;i<4;i++)
        Ankita.Insert();
    return 0;
}
