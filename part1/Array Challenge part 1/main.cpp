#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
   // cout<<"please enter the value of n";
    int k;
    int t;
    cin>>t;
    int n;
    for(int x=0;x<t;x++)
    {
        cin>>n;
        //cout<<"please enter the value of k";
        cin>>k;
        int Ar1[n];
        int Ar2[n];
        for(int i=0;i<n;i++)
            cin>>Ar1[i];
        for(int i=0;i<n;i++)
            cin>>Ar2[i];
        sort(Ar1,Ar1+n);
        sort(Ar1,Ar1+n);int sum=0;int i=0;
        while(sum<k)
            {
                 sum=0;
                sum=Ar1[0]+Ar2[i];
                 if(i==(n))
                    break;
                i++;

            }
        if(i==n)
         {
            if (sum<k) cout<<"NO";
            if(sum>=k)
                {
                    int j;
                    for(j=0;j<(i);j++)
                    {
                        int sum1=0;
                        sum1=Ar1[j]+Ar2[n-j];
                        if(sum1<k) break;
                    }
                if(j<i)
            cout<<"NO";
                else
            cout<<"YES";
                }
        }

            if(i<(n))
        {
        int j;
        for(j=0;j<(i);j++)
        {
            int sum1=0;
            sum1=Ar1[j]+Ar2[n-j];
            if(sum1<k) break;
        }
        if(j<i)
            cout<<"YES";
        else
            cout<<"YES";
        }
        cout<<endl;
    }
        return 0;
}
