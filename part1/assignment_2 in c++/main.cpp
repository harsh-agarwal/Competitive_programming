#include <iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

struct word
{
    char a;
    word *next;
};
int todo(int Ar[],int p,int r)
{
    int x;int i=p-1;
    x=Ar[r];int j;
    for( j=p;j<r;j++)
    {
        if(Ar[j]<=x)
            {
                i=i+1;
                int temp=Ar[j];
                Ar[j]=Ar[i];
                Ar[i]=temp;
            }
    }
    int temp=Ar[i+1];
    Ar[i+1]=Ar[r];
    Ar[r]=temp;
    return(i+1);
}
void quickSort(int Ar[],int p,int r)
{

    if(p>=r)return;
    int q=todo(Ar,p,r);

        quickSort(Ar,p,q-1);
        quickSort(Ar,q+1,r);
}

void check_anagram()
{

    word *head_one=new word;
    cin>>head_one->a;
    head_one->next=NULL;
    word *tail_one;
    tail_one=head_one;
    int count1=0;
    while(int(tail_one->a)!=10)
    {
        //word *temp1=(word*)malloc(sizeof(word));
        word *temp1=new word;
        cin.get(temp1->a);
        if(int(temp1->a)==10)break;
        tail_one->next=temp1;
        temp1->next=NULL;
        tail_one=temp1;
        count1++;
    }
    //cout<<"Harsh1";
    word *head_two=new word;
    cin>>head_two->a;
    head_two->next=NULL;
    word *tail_two;
    tail_two=head_two;
    int count2=0;
    while(true)
    {
        //word *temp2=(word*)malloc(sizeof(word));
        word *temp2=new word;
        cin.get(temp2->a);
        if(int(temp2->a)==10)break;
        tail_two->next=temp2;
        temp2->next=NULL;
        tail_two=temp2;
        count2++;
    }
    if(count1!=count2)
    {
        cout<<"False";
        return;
    }
    int first_word[count1];int i=0;
    while(head_one!=NULL)
    {
        first_word[i]=int(head_one->a);
        //word *temp=(word*)malloc(sizeof(word));
        word *temp=new word;
        temp=head_one;
        head_one=head_one->next;
        delete(temp);
        i++;
    }
    i=0;
    int second_word[count2];
    while(head_two!=NULL)
    {
        second_word[i]=int(head_two->a);
        //word *temp=(word*)malloc(sizeof(word));
        word *temp=new word;
        temp=head_two;
        head_two=head_two->next;
        delete(temp);
        i++;
    }
    quickSort(first_word,0,count1);
    quickSort(second_word,0,count2);
    i=0;
    for(;i<count1;i++)
    {
        if(first_word[i]!=second_word[i])
            break;
    }
    if(i==count1)
        cout<<"True";
    else
        cout<<"False";
}
int main()
{
    check_anagram();
    return 0;
}
