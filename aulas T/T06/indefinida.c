/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de repetição indefinida
*
* Compilar: clang indefinida.c -o indefinida
* Executar: ./indefinida
*/

#include <stdio.h>

int main(){
    int cont, nota, total;
    float media;
    
    cont = 0; total = 0; 
    printf ("Nota do aluno %d: ", cont+1);
    scanf ("%d", &nota);

    while (nota != -1) {
        total = total + nota;
        cont = cont + 1;
        printf ("Nota do aluno %d (-1 para terminar): ", cont+1);
        scanf ("%d", &nota);
    }
    media = (float)total/cont;
    
    printf ("Media da turma = %f\n", media);
}
