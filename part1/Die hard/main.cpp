#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
    cin>>n;
    int Ar[n];
    for(int i=0;i<n;i++)
        {
        cin>>Ar[i];
        }
    long int q;
    cin>>q;
    int answer[q];
    for(int i=0;i<q;i++)
    {
        int x;int y;
        cin>>x>>y;
        if(x==y&&Ar[x]==0)
        {
            answer[i]=1;
            continue;
        }
        if(Ar[x-1]%2==0&&Ar[x]!=0)
            answer[i]=0;
        if(Ar[x-1]%2!=0||Ar[x]==0)
            answer[i]=1;
    }
    for(int i=0;i<q;i++)
        {
        if(answer[i]==1)
            cout<<"Odd"<<endl;
        else
            cout<<"Even"<<endl;
        }
    return 0;
}

