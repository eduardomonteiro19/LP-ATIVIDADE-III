#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    
    char nome[2][200];
    int idade[2];
    float notas[2][3];
    int i, j;
    float media[4];
    int somanota = 0;



    for (i = 0; i < 5; i++)
    {
        printf("digite o seu nome:\n");
        gets(nome[i]);

        printf("digite a sua idade:\n");
        scanf("%d", &idade[i]);



        for (j = 0; j < 3; j++)
        {
            printf(" digite uma nota:");
            scanf("%f", &notas[i][j]);

            somanota += notas[i][j];
        }

        media[i] = somanota / j;
        somanota = 0;
     
     
    if (media[i] >=7)
    {
        printf("Aprovado!!!\n");
    }
    else if (media[i] >= 5 && media[i] < 7)
    {
        printf ("recuperação!!!\n");
    }
    else
    {
      printf ("reprovado!!!\n");
    }
     

   
        fflush(stdin);
    }

    printf("\n exibindo dados da disciplina...\n");
  
    for (i = 0; i < 5; i++)
    {
        printf("\n seu Nome : %s \n",nome[i]);
        printf("\n sua idade:%d\n",idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("nota: %.1f \n", notas[i][j]);
        printf("\n media: %.1f \n", media[i]);
        }

    
    }

  return 0;
}


 