#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    FILE *arq;
    int i = 0;

    struct
    {
        char matricula[10];
        char nome[30];
    } aluno;

    memset(&aluno, 0, sizeof(aluno));

    arq = fopen("aluno.dat", "w+b");
    if (arq == NULL)
    {
        printf("Problem ao abrir o arquivo\n");
    }
    printf("Matricula: ");
    scanf("%s", aluno.matricula);

    while (strcmp("0", aluno.matricula))
    {

        printf("Nome:");
        scanf("%s", aluno.nome);

        fwrite(&aluno, sizeof(aluno), 1, arq);
        i++;

        printf("Matricula: ");
        scanf("%s", aluno.matricula);
    }
    fclose(arq);

    arq = fopen("aluno.dat", "rb");
    fseek(arq, 0, SEEK_SET);
    memset(&aluno, 0, sizeof(aluno));

    while (fread(&aluno, sizeof(aluno), 1, arq) != NULL)
    {
        printf("%s - %s\n", aluno.matricula, aluno.nome);
    }

    fclose(arq);
    return 0;
}