/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização da instrução switch 
* implementação de calculadora simples
*
* Compilar: clang calculadora.c -o calculadora
* Executar: ./calculadora
*/

#include <stdio.h>

int main(){
    int x, y;
    char op;

    printf("Qual e' a expressao? (operador operação operador)\n");
    scanf("%d %c %d", &x, &op, &y);

    switch(op){
        case '+':
            printf("Resultado = %d\n", x + y); break;
        case '-':
            printf("Resultado = %d\n", x - y); break;
        case '/':
            printf("Resultado = %f\n", (float) x / y); break;
        case '*':
        case 'x':
            printf("Resultado = %d\n", x * y);
    }

    return 0;
}
