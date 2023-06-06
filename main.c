#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor1[5];
    int vetor2[5];
    int moda = 0;
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        vetor2[i] = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vetor1[i] == vetor1[j])
            {
                vetor2[i] = vetor2[i] + 1;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor2[i] > contador)
        {
            contador = vetor2[i];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (vetor2[i] == contador)
        {
            moda = i;
        }
    }

    if (contador < 2)
    {
        printf("Nenhum número se repete");
    }
    else
    {
        printf("\nA moda dos números armazenados e: %d", vetor1[moda]);
    }
    return 0;
}
