#include <iostream>

#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;



double GenerateCoordinate(int &i)
{

    srand(time(0)+i);
    double n1=rand()%4000;

    double x=n1/4000;


    return x;

}
double HowManyInside(double X[],double Y[])
{
    double count=0;
    for(int i=0;i<1000;i++)
    {
        if( ((X[i]*X[i])+(Y[i]*Y[i]))<1)
        count++;
    }


    double pi;
    pi=(count/1000.0)*4;
    return pi;

}

int main()
{
int count=0;double sum=0;
while (count<10)
    {
        double X[1000],Y[1000];

    for(int i=0,j=2000;i<1000;i++,j--)
    {
        X[i]=GenerateCoordinate(i);
        Y[i]=GenerateCoordinate(j);
    }

double pi=HowManyInside(X,Y);
     sum=sum+pi;
     count++;
    }
cout<<"the value of pi is"<<sum/10;
return 0;
}
