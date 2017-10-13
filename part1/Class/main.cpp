#include <iostream>

using namespace std;

int main()
{
    cout<<"please enter the number of inputs that you want to give";
    int n;
    cin>>n;
    int *Ar;
    Ar=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>Ar[i];
    }
    int max;
    max=Ar[0];
    int min=Ar[0];int sum=0;
    for(int i=0;i<n;i++)
    {
        if(Ar[i]>max)
            max=Ar[i];
        if(Ar[i]<min)
            min=Ar[i];
        sum=sum+Ar[i];
    }
    cout<<"the maximum value is"<<max;
    double avg=sum/n;
    cout<<"the minimum value is"<<min;
    cout<<"the average is"<<avg;
    cout<<"the range is "<<max-min;

    return 0;
}
