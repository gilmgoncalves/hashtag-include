/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de repetição definida
*
* Compilar: clang definida.c -o definida
* Executar: ./definida
*/

#include <stdio.h>

int main(){
    int cont, nota, total;
    float media;
    
    /* o que aconteceria sem inicializacao? */
    cont = 0; total = 0; 
    
    while (cont < 10) {
        printf ("Nota do aluno %d: ", cont+1);
        scanf ("%d", &nota);
        total = total + nota;
        cont = cont + 1;
    }

    media = (float)total/10;
    printf ("Media da turma = %f\n", media);
}
