#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo;

    arquivo = fopen("arq.txt", "a");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }
    printf("Aperte qualquer tecla para finalizar...");
    getchar();

    fclose(arquivo);

    return 0;
}