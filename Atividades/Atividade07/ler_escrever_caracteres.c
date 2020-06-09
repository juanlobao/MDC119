#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *arq;
    int i = 0;
    char c;
    char nome[30];
    char matricula[10];
    arq = fopen("aluno.txt", "w");

    if (arq == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return 0;
    }
    printf("Matricula:");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s", matricula);

    while (matricula[0] != '0')
    {
        printf("Nome: ");
        memset(nome, '\0', sizeof(nome));
        scanf("%s", nome);
        for (i = 0; i <= 10; i++)
        {
            fputc(matricula[i], arq);
        }
        for (i = 0; i <= 30; i++)
        {
            fputc(nome[i], arq);
        }
        printf("Matricula:");
        memset(matricula, '\0', sizeof(matricula));
        scanf("%s", matricula);
    }
    i = 0;
    i = 0;

    while (matricula[i] != '0')
    {
        fputc(matricula[i], arq);
        i++;
    }

    i = 0;

    while (nome[i])
    {
        fputc(nome[i], arq);
        i++;
    }

    fclose(arq);
    arq = fopen("aluno.txt", "r");
    do
    {
        c = fgetc(arq);
        if (feof(arq))
        {
            break;
        }
        printf("%c", c);
    } while (1);


    fclose(arq);
    return (0);
}