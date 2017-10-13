#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    int answer[t];unsigned long long int Ar[10];
    Ar[0]=102334155;
    Ar[1]=165580141;
    Ar[2]=267914296;
    Ar[3]=433494437;
    Ar[4]=701408733;
    Ar[5]=1134903170;
    Ar[6]=1836311903;
    Ar[7]=2971215073;
    Ar[8]=4807526976;
    Ar[9]=7778742049;
    for(int i=0;i<t;i++)
    {
        unsigned long long int n;
        cin>>n;
        if(n<100000000)
        {
        unsigned long long int e=(5*n*n)-4;
        unsigned long long int d=sqrt(e);
        if(d*d==e)
            {
                answer[i]=1;
                continue;
            }
        e=5*n*n+4;
        d=sqrt(e);
        if(d*d==e)
            {
                answer[i]=1;
                continue;
            }
        answer[i]=0;
        }
        else
        {
          for(int j=0;j<10;j++)
          {
              if(n==Ar[j])
              {
                  answer[i]=1;
                  break;
              }
              answer[i]=0;
          }

        }

    }
    for(int i=0;i<t;i++)
    {
        if(answer[i]==1)
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
    return 0;
}
