#include <stdio.h>

int divisao(int dividendo, int divisor, int *resultado, int *resto);

int main(){
    int dividendo, divisor, resultado, resto;

    scanf("%d %d", &dividendo, &divisor);

    if(divisao(dividendo, divisor, &resultado, &resto))
        printf("resultado = %d \nresto = %d\n", resultado, resto);
    else
    {
        printf("ERRO!!\n");
    }
    
}

int divisao(int dividendo, int divisor, int *resultado, int *resto){

    if(divisor==0)
        return 0;

    *resultado=0;

    while (*resultado * divisor + divisor <= dividendo)
    {
        (*resultado)++;
    }
    
    *resto = dividendo - (*resultado * divisor);
    
    return 1;
}