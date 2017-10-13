#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;int ans;
    for(int i=0;i<n;i++)
    {
        cin>>Ar[i];
        sum=sum+Ar[i];
        ans=ans+(i+1)*Ar[i];
    }
    int maximum=ans;
    for(int i=0;i<n;i++)
    {
        ans=ans-sum;
        ans=ans+n*Ar[i];
        if(ans>maximum)maximum=ans;
    }

cout<<maximum;
return 0;
}
