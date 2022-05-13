#include <stdio.h>
#include <string.h>
#define DIM 5

typedef struct {
    char nome[20];
    char ruolo[20];
    char squadra[20];
}calciatore_t;

int main(){
    calciatore_t calciatori[DIM];
    int i;
    for (i = 0; i < DIM; i++)
    {
        printf("Inserisci il nome del calciatore\n");
        scanf("%s\n", &calciatori[i].nome);
        printf("Inserisci il ruolo\n");
        scanf("%s\n", &calciatori[i].ruolo);
        printf("Inserisci la squadra\n");
        scanf("%s\n", &calciatori[i].squadra);
    }

    printf("I calciatori che appartengono alla squadra MILAN sono:\n");

    for (i = 0; i < DIM; i++)
    {
        if (strcmp(calciatori[i].squadra, "milan") == 0)
        {
            printf("%s\n", calciatori[i].nome);
            printf("%s\n", calciatori[i].ruolo);
            printf("%s\n", calciatori[i].squadra);
        }
    }

    printf("I calciatori che hanno il nome che inizia con la lettera C sono:\n");
    for (i = 0; i < DIM; i++)
    {
        if (calciatori[i].nome[0] == 'C')
        {
            printf("%s\n", calciatori[i].nome);
            printf("%s\n", calciatori[i].ruolo);
            printf("%s\n", calciatori[i].squadra);
        }
    }
    return 0;
}
