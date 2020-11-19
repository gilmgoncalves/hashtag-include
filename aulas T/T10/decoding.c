#include <stdio.h>

int main()
{
    int d;

    while(1)
    {
        if(scanf("%2x",&d)!=1) break;
        printf("%c",d^0xAA);
    }

    return(0);
}