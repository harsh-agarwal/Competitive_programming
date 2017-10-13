#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node()
    {
        data=0;
        left=right=NULL;
    }

};



class BST
{
    node* find_node_by_value(int);
    node* find_parent_by_value(int);
    public:
    node *root;
    node *current;
    BST()
    {
        root=NULL;
        current=NULL;
    }
    void Insert(int);
    void In_order_print(node*);
};

node* BST:: find_node_by_value(int val)
{
    node *p=root;
    while(p!=NULL && p->data!=val)
    {
        if(p->data < val)p=p->right;
        else p=p->left;
    }
    return p;
}

node* BST:: find_parent_by_value(int val)
{

    node *p=root;
    node *q=NULL;
    while(p!=NULL and p->data!=val)
    {
        q=p;
        if(p->data < val) p=p->right;
        else p=p->left;
    }
    return q;
}

 void BST:: Insert(int value)
{
    node *p;
    p=find_node_by_value(value);
    if(p==NULL)
    {
        node *parent=find_parent_by_value(value);
        if(parent==root)
        {
            node *temp=new node;
            temp->data=value;
            root=temp;
        }
        else
            {
                if(value<parent->data)
                    {
                        node *temp=new node;
                        temp->data=value;
                        parent->left=temp;
                    }
                else
                    {
                        node *temp=new node;
                        temp->data=value;
                        parent->right=temp;
                    }
            }
    }
}

void BST:: In_order_print(node *changing_root)
{

    if(changing_root!=NULL)
    {
        In_order_print((changing_root->left));
        cout<<changing_root->data;
        In_order_print((changing_root->right));
    }


}

int main()
{
    cout << "Hello world!" << endl;
    BST Harsh;
    Harsh.Insert(2);
    Harsh.Insert(5);
    Harsh.Insert(7);
    Harsh.Insert(6);
    Harsh.In_order_print(Harsh.root);
    return 0;
}
