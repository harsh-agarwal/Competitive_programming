#include <stdio.h>
#include <stdlib.h>

void main()
{
    int Ar[20][20];
    printf("enter the size of the matrix that you enter \n");
    int n;
    scanf("%d",&n);
    printf("enter the elements\n");
    int i=0,j=0;int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&Ar[i][j]);
            if(i==j)sum=sum+Ar[i][j];
        }
    }
    printf("The trace of the matrix is %d",sum);

}
