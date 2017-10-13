#include <iostream>
#include<math.h>
#include<iomanip>
#include<cstdio>
#include<ctime>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //cout<<"please enter the value of N";
    int t;
    cin>>t;clock_t start,khatam;
    float expected_value[t];
    for(int k=0;k<t;k++)
    {


    float n;
    cin>>n;
    if(n==1)
    {
        expected_value[k]=0.0;
        continue;
    }
    //PLEAWE REMEMBER EXCEPTIONAL CASE TO BE INCLUDED N=1

    double sumTime=0;
    float s;float sum=0;
    cout<<endl;
    float x; float f; float a;
    for(float i=0;i<n;i++)
    {
    x=i;s=1;
    a=sqrt(x+sqrt(x));
    //start=clock();
    while(s>.001)
    {
        f=a;
        a=sqrt(x+a);

        //cout<<x<<endl;
        s=a-f;
    }
   // khatam=clock();
    //double diff=((double(khatam-start)*1000)/CLOCKS_PER_SEC);
    //sumTime=sumTime+diff;
    sum=sum+a;

    }

    //cout<<(1+sqrt(5))/2;
    //for(float i=0;i<n;i++)
        //s=sqrt(0.25+i)+s;

    expected_value[k]=(sum/n);
    cout<<"avg time in the calculation of Y"<<sumTime/n<<endl;

    }

    for(int k=0;k<t;k++)
    {
        printf("%0.11lf",expected_value[k]);
        printf("\n");
    }
    return 0;
}
