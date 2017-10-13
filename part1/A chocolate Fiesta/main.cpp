#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
     int n;
    cin>>n;
    long int a;
    vector<int> even,odd;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
                even.push_back(a);
            else
                odd.push_back(a);
        }
        unsigned int m=even.size();
        unsigned int p=odd.size();

   unsigned long long int f=1;
   for(unsigned int j=0;j<m;j++)
   {
       f=(f*2)%(1000000007);
   }
   f=(f%1000000007)-1;
   //if(p%2==0)

       unsigned int b=(p/2)*2;
       long int product=1;long int sum=0;
       for(unsigned int i=0;i<=(b/2);i=i+2)
       {
           product=product*(((p-i)*(p-i-1))/(i+1)*(i+2)));
           sum=sum+(product);
       }
     long int x=sum%(1000000007);
     long int y=(f);
     long int result=(x+y+((x%1000000007)*(y%1000000007))%(1000000007));
     cout<<result;
     return 0;
}
