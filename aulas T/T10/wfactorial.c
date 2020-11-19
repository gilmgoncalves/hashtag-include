/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* exemplo de implementação errada do fatorial
* ilustração da utilização do gdb/lldb
*
* Compilar: clang wfactorial.c -g –o wfactorial
* Executar: lldb ./wfactorial
*/

#include <stdio.h>

int main(){
    int i, num, j;
    printf("n? ");
    scanf("%d", &num);
    
    for(i=1; i<num; i++)
        j=j*i;
    printf("O factorial de %d e %d\n", num, j);
    }
