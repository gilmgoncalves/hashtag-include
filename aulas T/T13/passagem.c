/* #include 
*
*  MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo de passagem por referência
*
* Compilar: clang passagem.c -o passagem -lm
* Executar: ./passagem
*/

#include <stdio.h>
#include <math.h>

void ModFase(float re, float im, float *mod, float *fase){
    *mod = sqrt(re*re + im*im);
    *fase = atan2(re, im);
}

int main(){
    float xr, xi, mod, fase;
    printf("&mod: %p\n &fase: %p\n", &mod, &fase);
    printf("Escreva um número complexo: ");
    scanf("%f %f", &xr, &xi);
    ModFase(xr, xi, &mod, &fase);
    printf("modulo: %f\n", mod);
    printf("fase: %f\n", fase);
}
