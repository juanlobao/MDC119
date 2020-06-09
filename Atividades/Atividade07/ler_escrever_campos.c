#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *arq;
    int i = 0;
    char nome[30];
    char nom[30];
    char matricula[10];
    char c;
    
    arq = fopen("alunos.txt", "w");

    if (arq == NULL)
    {
        printf("ERRO\n");
        return 0;
    }
    printf("Matricula:");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s", matricula);

    while (strcmp("0", matricula))
    {

        fprintf(arq, "%s\n", matricula);

        printf("Nome: ");
        memset(nome, '\0', sizeof(nome));
        scanf("%s", nome);

        fprintf(arq, "%s\n", nome);

        printf("Matricula:");
        memset(matricula, '\0', sizeof(matricula));
        scanf("%s", matricula);
    }


    fclose(arq);
    arq = fopen("alunoss.txt", "r");
    
    
    while (fscanf(arq, "%10s\t%30s", matricula, nome) != EOF)
    {

        printf("%s - %s\n", matricula, nome);

    }

    fclose(arq);

    return 0;
}