#include <stdio.h>
#include <string.h>

 typedef struct{
     int x, y;
} ponto;

int main(){
    char s1[]="Hoje", s2[]="Hoje";
    ponto a, b;

    if(strcmp(s1,s2)==0) printf("são iguais\n");
    return 0;
}