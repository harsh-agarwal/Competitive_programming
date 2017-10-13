#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
   {
        int n;
        cin>>n;
        int Ar[n];int sum=0;
        for(int j=0;j<n;j++)
            {
                cin>>Ar[j];
                sum=sum+Ar[j];
            }
       int flag=0;int sumLeft=0;int sumRight=sum;
        for(int i=0;i<n;i++)
        {

            if(i!=0||i!=(n-1))
            {
                sumRight=sumRight-Ar[i];

                sumLeft=sumLeft+Ar[i+1];
            }
            else
                {
                    if(i==0)
                        {sumLeft=0;sumRight=sumRight-Ar[0];}
                    if(i==n-1)
                        {sumRight=0;
                        sumLeft=sum-Ar[i];}
                    //sumRight=sum;
                }
                cout<<sumRight<<" "<<sumLeft<<endl;
            if(sumLeft==sumRight)
                {
                    flag=1;
                }
                if(flag==1)
                {
                    answer[i]=1;
                    break;
                }
                else
                    answer[i]=0;

        }

    for(int i=0;i<t;i++)
        {
        if(answer[i]==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }

    return 0;
}
}

