#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 char ch;
 fp = fopen("one.txt", "w");
 printf("Enter data");
 while( (ch = getchar())) {
        if(ch=='\n')
        {
            ch=getchar();
            if(ch=='\n')
                break;
        }
    putc(ch,fp);
 }
 fclose(fp);
 fp = fopen("one.txt", "r");
 while( (ch = getc(fp)) != EOF)
    printf("%c",ch);
 fclose(fp);
}
