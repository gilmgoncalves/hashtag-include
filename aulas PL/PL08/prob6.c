#include <stdio.h>
#include <stdlib.h>
#include "pnglib.h"

/*******************************************************************************/
/*                            FUNCOES A IMPLEMENTAR                            */

#define POS(x,y) (y)*largura + (x)

void filtro_media(unsigned char entrada[], unsigned char saida[], int largura, int altura)
{
    /* alinea a) */


}

void filtro_sobel(unsigned char entrada[], unsigned char saida[], int largura, int altura)
{
    /* alinea b) */


}

void filtro_threshold(unsigned char entrada[], unsigned char saida[], int largura, int altura, int threshold)
{
    /* alinea c) */


}

/*******************************************************************************/

static int imprime_erro(enum TinyPngOut_Status status);
int grava_png(unsigned char imagem[], int largura, int altura, char *nome_ficheiro);

int main()
{
    int altura, largura, canais;
    FILE *img_in;

    img_in = fopen("imgfeup", "rb");
    if(img_in == NULL) {
        printf("Erro a abrir ficheiro de entrada.\n");
        return 1;
    }

    fread(&largura, sizeof(int), 1, img_in);
	fread(&altura, sizeof(int), 1, img_in);
	fread(&canais, sizeof(int), 1, img_in);

    if(canais != 1) {
        printf("Imagem de entrada devia ser grayscale.\n");
        return 1;
    }
    unsigned char imagem1[largura*altura];
    unsigned char imagem2[largura*altura];

    fread(imagem1, sizeof(char), largura*altura, img_in);
	fclose(img_in);   

    grava_png(imagem1, largura, altura, "resultado0.png");

    filtro_media(imagem1, imagem2, largura, altura);
    grava_png(imagem2, largura, altura, "resultado1.png");

    filtro_sobel(imagem2, imagem1, largura, altura);
    grava_png(imagem1, largura, altura, "resultado2.png");

    filtro_threshold(imagem1, imagem2, largura, altura, 100);
    grava_png(imagem2, largura, altura, "resultado3.png");
}

int grava_png(unsigned char imagem[], int largura, int altura, char *nome_ficheiro)
{
	FILE *fout;
    
    fout = fopen(nome_ficheiro, "wb");
	if (fout == NULL) {
		printf("Erro a abrir ficheiro de saida.\n");
		return -1;
	}

    int i, pos=0;
    unsigned char PIXELS[largura*altura*3];
    for(i=0; i<largura*altura; i++)
    {
        PIXELS[pos] = PIXELS[pos+1] = PIXELS[pos+2] = imagem[i];
        pos += 3;     
    }
	struct TinyPngOut pngout;
	enum TinyPngOut_Status status = TinyPngOut_init(&pngout, largura, altura, fout);
	if (status != TINYPNGOUT_OK)
		return imprime_erro(status);
	
	status = TinyPngOut_write(&pngout, PIXELS, (size_t)(largura * altura));
	if (status != TINYPNGOUT_OK)
		return imprime_erro(status);
	
	fclose(fout);
	return 0;
}

static int imprime_erro(enum TinyPngOut_Status status)
{
	const char *msg;
	switch (status) {
		case TINYPNGOUT_OK              :  msg = "OK";                break;
		case TINYPNGOUT_INVALID_ARGUMENT:  msg = "Invalid argument";  break;
		case TINYPNGOUT_IMAGE_TOO_LARGE :  msg = "Image too large";   break;
		case TINYPNGOUT_IO_ERROR        :  msg = "I/O error";         break;
		default                         :  msg = "Unknown error";     break;
	}
	printf("Erro: %s\n", msg);
	return 1;
}