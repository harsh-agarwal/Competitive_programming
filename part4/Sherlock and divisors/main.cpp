# include <stdio.h>
# include <math.h>
#include<iostream>

using namespace::std;

// A function to print all prime factors of a given number n
long long int primeFactors(long long int n)
{
   long long int count=0; // Print the number of 2s that divide n
    while (n%2 == 0)
    {
       count++;// printf("%d ", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    if(count==0)return 0;
    long long int product=count;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
       long long int count1=0; // While i divides n, print i and divide n
        while (n%i == 0)
        {
           count1++; //printf("%d ", i);
            n = n/i;
        }
        count1++;
        product=count1*product;
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        product=product*2;//printf ("%d ", n);
     return(product);
}

int main()
{
  long int t;
   cin>>t;
   long long int answer[t];
   for(long int i=0;i<t;i++)
   {
       long long int n;
       cin>>n;
       answer[i]=primeFactors(n);

   }
   for(long int i=0;i<t;i++)
   {
       cout<<answer[i]<<endl;
   }
}
