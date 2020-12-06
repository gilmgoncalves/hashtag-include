#include <stdio.h>

int main(){
    int x=2;
    double y = 1.2;
    int *px = &x;
    double *py = &y;

    printf("\n/*\n");
    printf(" *  &x:  %p\n", &x);
    printf(" *  &y:  %p\n", &y);
    printf(" * &px:  %p\n", &px);
    printf(" * &py:  %p\n", &py);
    printf("* */\n\n");

    printf("(*px)\t%d\n", *px);
    printf("(px)\t%p\n", px);
    printf("(&py)\t%p\n", &py);
    printf("(px+2)\t%p\n", px+2);
    printf("(py+1)\t%p\n", py+1);
    printf("(--py)\t%p\n", --py);
}
