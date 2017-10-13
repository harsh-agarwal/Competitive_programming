#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,j,k,i;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=n-j;i>=1;i--)
        printf(" ");
        for(k=0;k<(2*j-1);k++)
        printf("*");
        printf("\n");
    }
    for(j=n-1;j>=1;j--)
    {
        for(i=n-j;i>=1;i--)
        printf(" ");
        for(k=0;k<(2*j-1);k++)
        printf("*");
        printf("\n");
    }
    return 0;
}
