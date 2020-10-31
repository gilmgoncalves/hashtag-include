/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Calcule o somatório dos quadrados entre 1 e n
*
* Compilar: clang squad.c -o squad
* Executar: ./squad
*/

#include <stdio.h>

int squad(int n)
{
    int i = 1, s = 0;
    while (i <= n){
	s = s + i ∗ i; 
	i++;
    }
    return s;
}

int main()
{
    int n;
    printf("Valor de n?");
    scanf("%d", &n);
    printf("Soma dos quadrados: %d\n", squad(n));
}
