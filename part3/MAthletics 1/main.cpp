#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int k,n;
    cout<<"enter the value of k"<<endl;
    cout<<"enter the value of n"<<endl;;
    cin>>k;
    cin>>n;
    long long int c=(k%n);
    long long int d=(k-1)/2;
    long long int f=d%n;
    long long int g=(k+2)%n;
    long long int h=(f*g)%n;

    long long int e=(h*c)%n;

    cout<<e;
}
