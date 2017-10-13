#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a;
    scanf("%d",&a);
    long int b;
    scanf("%ld",&b);
    long long int c;
    scanf("%lld",&c);
    char d;
    scanf("%c",&d);
    float e;
    scanf("%f",&e);
    double f;
    scanf("%lf",&f);
    printf("%d\n%ld\n%lld\n",a,b,c);
    printf("%c\n%f\n%lf",d,e,f);
    return 0;
}
