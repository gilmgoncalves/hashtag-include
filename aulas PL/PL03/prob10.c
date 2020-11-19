/* #include
*
* MIECC - FEUP / PROG1 - EEC005
*
* Aula PL03 / Problema 10
* Crie um programa que converta um numero com algarismos arabicos para numeraçao romana.
* Considere apenas numeros entre 1 e 999.
*
* Compilar: clang prob10.c -o prob10
* Executar: ./prob10
*/

#include <stdio.h>

int main(){
    int num, centenas, dezenas, unidades;

    printf("Insira o número: ");
    scanf("%d", &num);

    centenas = num/100;
    num -= centenas*100;
    dezenas = num/10;
    unidades = num%10;

    printf("%d%d%d\n", centenas, dezenas, unidades);

    if(centenas>8){
        printf("CM");
    }else if (centenas>5){
        
    }else if (centenas>4)
    {
        printf("D");
    }else if (centenas>3){
        printf("CD");
    }else if (centenas>0)
    {
        
    }
    
    

    return 0;
}