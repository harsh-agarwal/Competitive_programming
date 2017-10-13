#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    char Ar[100];
    char a='a';
    int i=0;
    while(  (a=getchar())!=10  )
    {
        Ar[i]=a;
        i++;
    }
    int size=i;
    int flag=1;int j;i=0;
    while(flag==1)
    {
        flag=0;
        for(j=i+1;j<size;j++)
        {
            if(Ar[i]==Ar[j])
            {
                flag=1;
                break;
            }
        }
        i++;
        if(i>=size)break;
    }
    printf("%c",Ar[i-1]);

    return 0;
}
