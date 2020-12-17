/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* função de geração de números pseudo-aleatórios
* último valor da sequência guardado em variável global
*
* Compilar: clang modramp.c -o modramp
* Executar: ./modramp
*/

#include <stdio.h>

#define MULTIP 25173
#define INCREM 13849
#define MODULUS 65536
#define SEMENTE 17

int x = SEMENTE;


int modrand(){
    return x = (MULTIP*x+INCREM)%MODULUS;
}
 
int main(){
    int face, x;
    
    do {
        x = modrand();
        face = x%6 + 1;
        printf("face - %d\n", face);
    } while(face != 6);

    return 0;
}

