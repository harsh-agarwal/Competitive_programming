#include <iostream>

using namespace std;

int main()
{
    cout<<"hi"<<endl;
    long long int n;
    cout<<"please enter the value of n"<<endl;
    cin>>n;
    cout<<"please enter the number by which it has to be divided";
    long  long int mod;
    cin>>mod;
    long long int m;
    long long int master_sum=0;

     for (long long int i=2;i<=n;i++)
     {
        long long int k=1;long int sum=0;long int j=0;

        while(k>0)
         {
           j=j+1;

            m=1;
            for(int g=0;g<j;g++)
           {


                m=m*i;

           }

           k=(n/m);
           sum=sum+k;
         }
         long int x=sum%mod;
         master_sum=master_sum+x;
     }
    long int answer=master_sum%mod;
    cout<<answer;
    return 0;
}
