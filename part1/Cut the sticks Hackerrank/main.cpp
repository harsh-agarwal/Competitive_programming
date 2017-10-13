#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int Ar[n];
    for(int i=0;i<n;i++)
        {
        cin>>Ar[i];
        }
    int sum=1;int i=0;
    while(sum>0)
        {
        cout<<n-i<<endl;
        sum=0;
        sort(Ar+i,Ar+n);
        cout<<"the original sorted array ";
        for(int x=0;x<n;x++)
        cout<<Ar[x]<<" ";

        for(int j=i;j<n;j++)
            {
             Ar[j]=Ar[j]-Ar[i];
            if(Ar[j]==0)i++;
            }

        for(int k=0;k<n;k++)
            {
             cout<<Ar[k]<<" ";
              sum=sum+Ar[k];
            }
            cout<<endl;

        }
    return 0;
}
