/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da escrita de ficheiros de texto
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
    FILE *fout;    /* declara variável de ficheiro */
    
    fout = fopen("exp.txt", "w"); /* abre ficheiro para escrita*/
    
    for (i = 0; i < 4; i++)
	    fprintf(fout,"%s %f\r\n", cidade[i], temp[i]);
    
    fclose(fout);
    printf("Escrita do ficheiro terminada\n");

    return 0;
}
