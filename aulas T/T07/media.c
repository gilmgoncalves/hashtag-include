/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* Exemplo de utilização da instrução do-while 
* Calcular média das notas de uma turma.
*
* Compilar: clang media.c -o media
* Executar: ./media
*/

#include <stdio.h>

int main(){
    int cont = -1, nota = 0, total = 0;
    float media;

    do {
        total = total + nota;
        cont = cont + 1;
        printf ("Nota do aluno %d (-1 para terminar): ", cont+1);
        scanf ("%d", &nota);      
    } while (nota != -1); // -1 funciona como valor 'sentinela' da repetição

    media = (float)total/cont;
    printf ("Media da turma = %.2f\n", media);
    
}
