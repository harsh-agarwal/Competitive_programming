#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Personal_data
{
    char name[50];
    char mobile[20];
};

int main()
{
    int n;
    cout<<"enter the number of people's data"<<endl;
    cin>>n;
    getchar();
    Personal_data *p;
    Personal_data Harsh[n];
    p=Harsh;
    for(int i=0;i<n;i++)
    {
        gets(p->name);
        //cout<<p->name;
        gets(p->mobile);
        //cout<<p->mobile;
        //getchar();
        p++;
    }
    cout<<endl<<"please enter the name to be searched for"<<endl;
    char search_element[50];int flag=-1;
    gets(search_element);
    for(int i=0;i<n;i++)
    {
        if(strcmp(search_element,(p->name))==1)
        {
            cout<<"the searched element is present";
            flag=1;
            break;

        }
    }
    if(flag==-1)
    {
        cout<<"the element is not found";
    }
    //cout << "Hello world!" << endl;
    return 0;
}
