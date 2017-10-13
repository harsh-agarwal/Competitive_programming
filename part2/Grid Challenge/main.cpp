#include <iostream>

using namespace std;

int main()
{
    cout<<"please enter the number of test cases";
    int t;
    cin>>t;int answer[t];
    for(int i=0;i<t;i++)
    {
        cin>>T[i];
        int n;
        n=T[i];
        int Ar[n][n];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                char q;
                cin>>q;
                Ar[j][k]=int(q);
            }
        }

        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(Ar[j][k]>Ar[j][k+1])
                {
                   int temp;
                   temp=Ar[j][k];
                   Ar[j][k]=Ar[j][k+1];
                   Ar[j][k]=temp;
                }

            }
        }
    }


}
