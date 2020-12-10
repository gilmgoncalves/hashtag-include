#include <stdio.h>

int main(){
    int x=2;
    double y = 1.2;
    int *px = &x;
    double *py = &y;

    printf("\n/*\n");
    printf(" *  &x:  %X\n", &x);
    printf(" *  &y:  %X\n", &y);
    printf(" * &px:  %X\n", &px);
    printf(" * &py:  %X\n", &py);
    printf("* */\n\n");

    printf("(*px)\t%d\n", *px);
    printf("(px)\t%X\n", px);
    printf("(&py)\t%X\n", &py);
    printf("(px+2)\t%X\n", px+2);
    printf("(py+1)\t%X\n", py+1);
    printf("(--py)\t%X\n", --py);
}
