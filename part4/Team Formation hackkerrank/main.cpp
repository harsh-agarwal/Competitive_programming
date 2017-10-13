#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t; int answer[t];
    for(int i=0;i<t;i++)
        {
        int n;
        cin>>n;
        int Ar[n];
        for(int j=0;j<n;j++)
            {
             cin>>Ar[j];
            }
        sort(Ar,Ar+n);
        //for(int j=0;j<n;j++)
        //{
        //    cout<<Ar[j]<<" ";
        //}
        //cout<<endl;
        int Diff[n-1];
        for(int j=0;j<n-1;j++)
            {
            Diff[j]=Ar[j+1]-Ar[j];
            }
            //for(int j=0;j<n-1;j++)
               // cout<<Diff[j]<<" ";
        int count1=0;int minimum=n;

            int j=0;
            while(Diff[j]!=1)
            {
                j++;
            }
            for(int k=j;k<n-1;k++)
            {
            if(Diff[k]==1)
                count1++;
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
            if(Diff[n-1]==1)
            {


            if(count1<minimum)
            {
                minimum=count1;
            }}
            }
    //cout<<endl<<minimum<<endl;
    answer[i]=minimum+1;
    }
    for(int i=0;i<t;i++)
        {
        cout<<answer[i]<<endl;
        }
    return 0;
}
