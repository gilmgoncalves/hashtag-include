/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* calcula o máximo divisor comum entre dois inteiros
* ilustra utilização de uma função
*/

#include <stdio.h>

int mdc(int u, int v);

int main(){
    int a, b, c;
    printf("Indique dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    c = mdc(a,b);
    printf("O máximo divisor comun entre %d e %d e' %d.\n", a,b,c);
    return 0;
}

int mdc(int u, int v)
{
	int tmp;
    while (v != 0){
        tmp = u % v;
		u = v;
		v = tmp;
	}
	return u;
}		