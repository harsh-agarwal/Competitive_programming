#include <iostream>

using namespace std;

struct node
{
    node *left;
    node *right;
    int value;
};

node *insert_node(int x,node *head)
{
    node *temp=new node;
    if(head==NULL)break;
    temp->value=x;
    if(x>head->value)
        {
            head->right=temp;
            cout<<"enter the value of the next node";
            cin>>x;

            //insert_node(x,temp);
        }
    if(x<head->value)
        {
            head->left=temp;
            //insert_node(x,temp)
        }
}

int main()
{
    cout<<"Hello we are going to create a tree that will be sequentially filled \n";
    node *main_root=new node;
    cout<<"please enter the value of the root node";
    cin>>main_root->value;
    node *temp1;
    temp1=main_root;
    int x;
    cin>>x;
    insert_node(temp1,x);




    return 0;
}
