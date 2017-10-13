#include <iostream>

using namespace std;

int fun(int Ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {

            sum=sum+((n-1)/(Ar[i]));

    }
    return(sum);
}
int main()
{
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int Ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>Ar[j];
        }
        answer[i]=fun(Ar,n);
    }
    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;
    return 0;
}
