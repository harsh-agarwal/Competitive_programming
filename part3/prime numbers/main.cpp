#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    //printf("Harsh1 %d \n",printf("Harsh"));
    int c=10;
    int d;
    d=scanf("%d",&c);
    printf("%d",d);
    cout << "Hello world!" << endl;
    int n=100;
    cout<<"how many primes do you need";
    int count;int k=0;
    cin>>count;
    int *prime;
    prime=new int[count];
     for(int j=5;j<n;j++)
    {
        int i;
        for ( i=2;i<=(sqrt(float(j)));i++)
        {
            if(j%i==0)
                break;


        }
         if(i>sqrt(float(j)))
        {
         prime[k]=j;
         k++;
        }
    if (k>(count-1))
        break;



    }
    for(int i=0;i<count;i++)
    cout<<prime[i]<<"\n";
    delete prime;
    return 0;
}
