#include <stdio.h>

int main(){
    int x=2;
    double y = 1.2;
    int *px = &x;
    double *py = &y;
        
    printf("*px - %d\n", *px);
    printf("px - %p\n", px);
    printf("&py - %p\n", &py);
    printf("px+2 - %p\n", px+2);
    printf("px+1 - %p\n", py+1);
    printf("py - %p\n", py);
    printf("--py - %p\n", --py);
}
