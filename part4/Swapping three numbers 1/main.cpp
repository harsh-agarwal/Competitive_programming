#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void swap(int &a,int &b,int &c)
{
    int d=b;
    b=a;
    int e=c;
    c=b;
    a=e;
}
int main()
{
    printf("Hello world!\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d \n",a,b,c);
    swap(a,b,c);
    printf("a=%d b=%d c=%d \n",a,b,c);
    return 0;
}
