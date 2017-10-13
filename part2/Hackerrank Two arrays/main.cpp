#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int A[n];
        int B[n];
        int k;
        cin>>k;
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>B[j];
        }
        int sum=0;int flag=0;int flag2=0;
        int j=0;
        sort(A,A+n);
        sort(B,B+n);

            for(j=0;j<n;j++)
            {
                sum=A[0]+B[j];
                if(sum>=k)
                {
                    flag=1;
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
            {
                for(int x=0;x<j;x++)
                {
                    if((A[n-1-x]+B[x])<k) flag2=1;
                    if(flag2==1)break;

                }

            }

            if((flag==1)&&(flag2==0))
                answer[i]=1;
            else
                answer[i]=0;



    }

    for(int i=0;i<t;i++)
    {
        if (answer[i]==1)
            cout<<"YES"<<endl;
        if(answer[i]==0)
            cout<<"NO"<<endl;
    }

    return 0;
}
