/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Calcule a média aritmética e a média harmónica 
* dos complementos para 1 de dois números reais x e y, 
* respectivamente 1 – x e 1 – y
* Média harmónica é o inverso da média aritmética dos seus inversos
*
* Compilar: clang medias.c -o medias
* Executar: ./medias
*/

#include <stdio.h>

float media(float a, float b)
{
    return (a + b)/2;
}
float mediaharm(float a, float b)
{
    return 1/media(1/a, 1/b);
}

int main()
{
    float x, y;
    printf("Valores de x e y: ");
    scanf("%f %f", &x, &y);
    printf("Media: %f\n", media(1-x, 1-y));
    printf("Media harmonica: %f\n", mediaharm(1-x, 1-y));

    return 0;
}
