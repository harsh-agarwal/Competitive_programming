#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;int answer[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            answer[i]=0;
            continue;
        }
        if(n==1)
        {
            long int a;
            cin>>a;
            answer[i]=1;
            continue;
        }
        long int Ar[n];

        long int Diff[n-1];

        for(int j=0;j<n;j++)
        {
          cin>>Ar[j];
        }
        sort(Ar,Ar+n);
       // cout<<"the sorted array ";

        int flag=0;
        Diff[0]=Ar[1]-Ar[0];
        for(int j=1;j<(n-1);j++)
        {
            Diff[j]=Ar[j+1]-Ar[j];
            if((Diff[j]!=1)&&(Diff[j-1]!=1))
               {
                   flag=1;
                   break;
               }
        }
        if(Diff[n-2]!=1&&Diff[n-3]==1)
        {
            flag=1;

        }
        if(flag==1)
        {
            answer[i]=1;
            continue;
        }
       // cout<<"the difference array ";
      //  for(int j=0;j<n-1;j++)
         //   cout<<Diff[j]<<" ";
        int k=0;
        while(Diff[k]!=1)
        {
            k++;
        }
        int count1=0;int minimum=n;
        for(int j=k;j<(n-1);j++)
        {
            if(Diff[j]==1)
                {
                    count1++;
                 //  cout<<count1<<endl;
                }
            else
                {
                    if(count1<minimum)
                    {
                    minimum=count1;
                    count1=0;
                    }
                    else
                    count1=0;
                }
        }
        //cout<<count1;
        if(Diff[n-2]==1)
        {
            if(count1<minimum)
                minimum=count1;
        }
        //cout<<minimum<<endl;
        answer[i]=(minimum+1);
    }
    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;
    return 0;
}
