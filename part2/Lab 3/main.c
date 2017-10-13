#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void frequency()
{
    char ch;int count=0;
    int i=0;char Ar[100];
    while((ch=getchar())!=10)
    {
     Ar[i]=ch;
     i++;
    }
    int j;

    printf("\n enter the character whose frequency has to be checked \n");
    char b;
    scanf("%c",&b);
    //printf("%d",i);
    j=0;
    for(;j<i;j++)
    {
        if(Ar[j]==b)count++;
        //printf("harsh ");
    }
    printf("the frequency of the character asked is %d",count);
}
void delete_occurence()
{
    char ch;
    int i=0;char Ar[100];
    while((ch=getchar())!=10)
    {
     Ar[i]=ch;
     i++;
    }
    printf(" enter the character whose occurence has to be deleted");
    char b;
    scanf("%c",&b);
    int j;int size=i;
    for(j=0;j<i;j++)
    {
        if(Ar[j]==b)
        {
            int k;
            for(k=j;k<size;k++)
            {
                Ar[k]=Ar[k+1];
            }
            size=size-1;
            j=j-1;
        }
    }
    for(j=0;j<size;j++)
    {
        printf("%c",Ar[j]);
    }
}

void replace()
{
    char ch;
    int i=0;char Ar[100];
    while((ch=getchar())!=10)
    {
     Ar[i]=ch;
     i++;
    }
    printf("put the character whose occurence has to be replaced and with what respectively");
    char a;
    char b;
    scanf("%c %c",&a,&b);
    int j=0;

    for(j=0;j<i;j++)
    {
        if(Ar[j]==a)
        {
            Ar[j]=b;
        }
    }

    for(j=0;j<i;j++)
    {
        printf("%c",Ar[j]);
    }
}

int gp(int number,int max_power)
{

    int sum=1;
    int i;int product=1;
    for(i=1;i<=max_power;i++)
    {
        product=product*number;
        sum=sum+product;
    }
    return(sum);
}

int primeFactors(long long int n)
{
    int count=0; // Print the number of 2s that divide n
    //int sum_of_two=0;
    int original_number=n;
    while (n%2 == 0)
    {
        count++;// printf("%d ", 2);
        n = n/2;
    }
    int final_product=gp(2,count);
    //sum_of_two=sum_of_two+1;
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    //if(count==0)return 0;
    //int product=count;
    int i;
    for ( i = 3; i <= (int)(sqrt(n)); i = i+2)
    {
        int count1=0; // While i divides n, print i and divide n
        while (n%i == 0)
        {
            count1++; //printf("%d ", i);
            n = n/i;
        }
        final_product=final_product*gp(i,count1);
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    //printf ("%d ", n);
     return(final_product);
}

int main()
{
    printf("Hello world!\n");
    //frequency();
    //delete_occurence();
    //replace();
    int n;
    scanf("%d",&n);
    printf("%d",primeFactors(n));
    return 0;
}
