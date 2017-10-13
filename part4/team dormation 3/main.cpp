#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;answer[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int Ar[n];
        if(n==0)
            {answer[i]=0;continue;}
        if(n==1)
            {answer[i]=1;continue;}
        int Diff[n-1];
        cin>>Ar[0];
        for(int j=l;j<n;j++)
        {
            cin>>Ar[j];
        }
        sort(Ar,Ar+n);
        for(int j=1;j<n;j++)
            {
                Diff[j-1]=Ar[j]-Ar[j-1];


        int minimum=n;int counter=0;
        for(int j=0;j<(n-1);j++)
        {
            if(Diff[j]==1)
                counter++;
            else
            {
                if(counter<minimum)
                    minimum=counter;
                counter=0;
            }
        }

    }
    return 0;
}
