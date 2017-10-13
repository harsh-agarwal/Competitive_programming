#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int answer[t];
    for(int k=0;k<t;k++)
    {
        unsigned long long int n;
        cin>>n;
        int i;
        i=double(log10(n))/double(log10(2));
        int a;
        if(n%2==0)
         a=1;
        else
            a=5;
        int b;
        if(i>=2)
        {
            b=(2+4+(i-1)*6);
        }
        if(i==0)
        {
            b=2;
        }
        if(i==1)
        {
            b=6;
        }
        answer[k]=((b%10)*a)%10;
    }

    for(int i=0;i<t;i++)
    {
        cout<<answer[i]<<endl;
    }


    return 0;

}
