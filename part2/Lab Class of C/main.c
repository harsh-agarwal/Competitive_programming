#include <stdio.h>
#include <stdlib.h>

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


int main()
{
    //cout << "Hello world!" << endl;
    //cout<<"please enter the number of inputs";
    printf("Enter the number of inputs \n");
    int n;
    scanf("%d",&n);
    int Ar[50];int i;
    printf("please enter the numbers");
    for( i=0;i<n;i++ )
    {
        scanf("%d",&Ar[i]);
    }

    printf("enter the element to be searched for \n");
    int searchelement;
    scanf("%d",&searchelement);
    int beg=0,end=(n-1);
    int mid;
    while(beg<=end)
    {

        mid=(beg+end)/2;
        if (Ar[mid]==searchelement)
            printf("element found \n");
        if(Ar[mid]<searchelement)
            beg=(mid)+1;
        else
            end=(mid)-1;
    }


    return 0;
}
