#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int Ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>Ar[i];
    }
    //sort(Ar,Ar+n);
    long long int p;
    long long int q;
    cin>>p;
    cin>>q;

    long long int minimum1=fabs(Ar[0]-p);
    long long int minimum2=fabs(Ar[0]-q);
    long long int minimum3=fabs(Ar[0]-((p+q)/2));
    long long int minimum4=fabs(Ar[0]-((p+q+2)/2));
    for(int i=0;i<n;i++)
    {
    if(fabs(Ar[i]-p)<minimum1)
        minimum1=fabs(Ar[i]-p);
    if(fabs(Ar[i]-q)<minimum2)
        minimum2=fabs(Ar[i]-q);
    if(fabs(Ar[i]-((p+q)/2))<minimum3)

        minimum3=fabs(Ar[0]-((p+q)/2));

    if(fabs(Ar[i]-((p+q+2)/2))<minimum4)
        minimum4=fabs(Ar[i]-((p+q+2)/2));

    }
    if((minimum1>=minimum2)&&(minimum1>=minimum3)&&(minimum1)>=(minimum4))
      {cout<<p;return(0);}
      if((minimum3>=minimum1)&&(minimum3>=minimum2)&&(minimum3>=minimum4))
            {cout<<(p+q)/2;return(0);}
      if((minimum4>=minimum1)&&(minimum4>=minimum2)&&(minimum4>=minimum3))
      {
          cout<<(p+q+2)/2;
          return(0);
      }
      if((minimum2>=minimum1)&&(minimum2>=minimum3)&&(minimum2>=minimum4))
      {
          cout<<(q);
          return(0);
      }


}
