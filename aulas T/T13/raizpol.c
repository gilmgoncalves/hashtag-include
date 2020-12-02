/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* calcula raízes de polinómio grau 2
*
* Compilar: clang raizpol.c -o raizpol -lm
* Executar: ./raizpol
*/

#include <stdio.h>
#include <math.h>

int rpol2(float a, float b, float c, float *r1, float *r2)
{
    float discr;
    discr = b*b - 4*a*c;
    if (discr < 0)
        return 0; 	/* raizes complexas */
    else {
        *r1 = (-b + sqrt(discr))/(2*a);
        *r2 = (-b - sqrt(discr))/(2*a);
        return 1;
    }
}
int main()
{
    float a, b, c, x1, x2;
    printf("Coeficientes (a,b,c)? ");
    scanf("%f %f %f", &a, &b, &c);
    if (rpol2(a, b, c, &x1, &x2))
        printf("Raizes: %e %e\n", x1, x2);
    else
        printf("Raizes complexas!\n");
}