/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da escrita de ficheiros de texto com controlo de erros
*
* Compilar: clang cidades.c -o cidades
* Executar: ./cidades
*/

#include <stdio.h>
int main()
{
    int i,k;
    char *cidade[4] = {"Porto", "Aveiro", "Coimbra", "Lisboa"};
    float temp[4] = {12.5, 11.8, 12.2, 14};
    FILE *fout; 		    /* declara variável de ficheiro */
    
    fout = fopen("exp.txt", "w"); /* abre ficheiro para escrita */
    
    if (fout == NULL) { 	    /* se apontador inválido */
        printf("Impossível criar o ficheiro\n"); 
	    return 1; 	    /* termina */
    }
    
    for (i = 0; i < 4; i++) {
        k = fprintf(fout,"%s %f\r\n", cidade[i], temp[i]);
        printf("%d\n", k);
    }
    
    fclose(fout);
    printf("Escrita do ficheiro terminada\n");

    return 0;
}
