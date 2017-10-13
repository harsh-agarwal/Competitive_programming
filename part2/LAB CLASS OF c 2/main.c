#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("please enter the dimensions of the first matrix \n");
    int m,n;
    scanf("%d %d",&m,&n);
    int Ar[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&Ar[i][j]);
        }
    }

    printf("please enter the dimensions of the second matrix \n");
    int m1,n1;
    scanf("%d %d",&m1,&n1);
    if(m1!=n)
    {
        printf("not possible");
        return 0;
    }
    int Ar1[m1][n1];
    //int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&Ar1[i][j]);
        }
    }
    int k=0;
    int result[m][n1];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n1;j++)
        {
            result[i][j]=0;
        }
    }



    for(i=0;i<m;i++)
    {

        for(j=0;j<n1;j++)
        {
            for(k=0;k<n;k++)
                result[i][j]=result[i][j]+Ar[i][k]*Ar1[k][j];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n1;j++)
        {
            printf(" %d",result[i][j]);
        }
        printf(" \n");
    }


    return 0;
}
