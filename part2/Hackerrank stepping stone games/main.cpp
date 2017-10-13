#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int t;
   cin>>t;
   int answer[t];
   for(int i=0;i<t;i++)
   {
       unsigned long long int n;
       cin>>n;
       float f;
       f=(8*n+1);
       int t=(-1+pow(f,0.5))/2;
       if((t*(t+1))/2==n)
       {
           answer[i]=t;
       }
       else{
        answer[i]=0;
       }
   }
    for(int i=0;i<t;i++)
    {
        if(answer[i]==0)
            cout<<"Better Luck Next Time"<<endl;
        else
            cout<<"Go On Bob "<<answer[i]<<endl;
    }
    return 0;
}
