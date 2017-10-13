#include <iostream>
#include<ctime>

using namespace std;

int todo(int Ar[],int p,int r)
{
    int x;int i=p-1;
    x=Ar[r];
    for(int j=p;j<r;j++)
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
    cout << "Hello world!" << endl;
    int n;
    cout<<"please enter the number of elements that you need to sort";
    cin>>n;
    int Ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>Ar[i];
    }
    //clock_t start,khatam;
    //start=clock();
    quickSort(Ar,0,n-1);
    //khatam=clock();
    for(int i=0;i<n;i++)
        cout<<Ar[i]<<" ";
        //cout<<endl<<"time taken"<<double((double(khatam-start)*1000)/CLOCKS_PER_SEC);
    return 0;
}
