/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* 
*
* Compilar: clang isPowerOfTwo.c -o isPowerOfTwo
* Executar: ./isPowerOfTwo
*/

#include <stdio.h>

int isPowerOfTwo(int x);

int main(){
    int num;

    printf("Introduza um valor inteiro: ");
    scanf("%d", &num);

    if(isPowerOfTwo(num))
        printf("O número %d é potência de 2!\n", num);
    else
        printf("O número %d não é potência de 2!\n", num);

    return 0;
}

/* Divide N by 2 repetadly if N is even.
 * if we end up with a 1 then N is power of 2, otherwise not. 
 * Special case: if N = 0 then it is not a power of 2. 
 * */

/* int isPowerOfTwo(int x)
{
    if(x == 0)
        return 0;

    while(x%2 == 0)
        x /= 2;

    return (x == 1);
}
 */
int isPowerOfTwo(int x)
{
    // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
    return (x && !(x & (x - 1)));
}