#include <bios.h>
int getKey(void){
    int key, lo, hi;
    key = bioskey(0);
    lo = key & 0x00FF;
    hi = (key & 0xFF00) >> 8;
    return (lo == 0) ? hi + 256 : lo;
}
int main
{
    int a=getkey();
    printf("%d",%d);
}
