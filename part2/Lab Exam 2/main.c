#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void main()
{
    char s[100];
    gets(s);
    int i=0;int count=0;//considering that the sentence is grammatically correct and not written in a vague manner
    while(s[i]!='\0')
    {
        if((int)(s[i]==32)&& s[i+1]!=32)
           count++;i++;
    }
    printf("The given string has %d words",count+1);
}
