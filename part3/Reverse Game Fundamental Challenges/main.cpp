#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int t;
    cin>>t;
    long int answer[t];
    for(int j=0;j<t;j++)
    {
       int n;
       cin>>n;
       long int k;
       cin>>k;
       int Ar[n];
       for(long int i=0;i<n;i++)
       {
         if(i%2==0)
         {
             Ar[i]=(n-1-(i/2));
             if(Ar[i]==k)
             {
                 answer[j]=i;
                 break;
             }
         }
         else
        {
            Ar[i]=(i/2);
            if(Ar[i]==k)
             {
                 answer[j]=i;
                 break;
             }
        }
        }
    }
    for(int j=0;j<t;j++)
    {
        cout<<answer[j]<<endl;
    }

    return 0;
}
