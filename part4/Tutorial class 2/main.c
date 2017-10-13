#include <stdio.h>
#include <stdlib.h>

char* getstring()
{
    char str[]="harsh is";
    return str;
}

int main()
{
    printf("Hello world!\n %s",getstring());
    return 0;
}
