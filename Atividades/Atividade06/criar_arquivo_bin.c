#include <stdio.h>

int main()
{

    FILE *arq;

    arq = fopen("dados.bin", "wb");

    if (arq == NULL)
    {
        printf("ERRO");
    }
    printf("Pressione uma tecla para finalizar..");
    getchar();

    if (!feof(arq))
    {
        printf("Fim do arquivo encontrado");
        return 1;
    }

    fclose(arq);

    return 0;
}