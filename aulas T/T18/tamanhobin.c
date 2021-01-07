/* #include 
*
* MIECC - FEUP / PROG1 - EEC005
*
* exemplo ilustrativo da leitura de ficheiros binários
*
* Compilar: clang tamanhobin.c -o tamanhobin
* Executar: ./tamanhobin
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int n, i;
    float v[100];
    FILE *f;
	
	f = fopen("real.dat", "rb");
	fseek(f,0, SEEK_END);		/* vai para o fim */
	n = ftell(f);
	printf("Bytes: %d; Reals: %d\n", n, n/sizeof(float));

    rewind(f);
    fread( v, sizeof(float), n/sizeof(float), f);

    for(i=0; i<n/sizeof(float); i++)
        printf("%f ", v[i]);
    printf("\n");
    

	fclose(f);
}
