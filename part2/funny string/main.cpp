


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char Ar[10000];
    char ArReverse[10000];
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {

        cin>>Ar;
        int n=strlen(Ar);
        for(int k=n-1;k>=0;k--)
            ArReverse[k]=Ar[n-1-k];
        for(int k=0;k<n;k++)
        {
            cout<<Ar[k];
        }
        cout<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<ArReverse[k];
        }
        int x=0;
        for( x=0;x<n-1;x++)
            {
                if(fabs(ArReverse[x]-ArReverse[x+1])!=fabs(Ar[x]-Ar[x+1]))
                  break;

            }
            cout<<"the value of x is"<<x<<endl;
            if(x<n-1)
                answer[i]=0;
            else
                answer[i]=1;
    }
    for(int i=0;i<t;i++)
        {
         if(answer[i]==0)
             cout<<"NOT FUNNY"<<endl;
         if(answer[i]==1)
             cout<<"FUNNY"<<endl;
        }

    return 0;
}
