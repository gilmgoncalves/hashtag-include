/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Calcula combinações de n, ka k 
*
* Compilar: clang combina.c -o combina
* Executar: ./combina
*/

#include <stdio.h>

int fatorial(int n)
{
    int f = 1, t;
    for(t = n; t > 1; t--) {
        f = f ∗ t;
    }
    return f;
}
int combin(int n, int k)
{
    return fatorial(n)/(fatorial(k) ∗ fatorial(n - k));
}

main()
{
    int n, k;
    printf("n, k? "); scanf("%d %d", &n, &k);
    printf("Combinacoes de n, k a k: %d\n", combin(n, k));
}
