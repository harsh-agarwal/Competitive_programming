#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;long int Ar[t];
    for(int i=0;i<t;i++)
    {
    cin>>Ar[i];
    }
    for(int x=0;x<t;x++)
    {
        int n;
        n=Ar[x];
        int answer[n];int s=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                answer[i]=n-s;
                s++;
            }
            else
            {
                answer[i]=i;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            cout<<answer[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
