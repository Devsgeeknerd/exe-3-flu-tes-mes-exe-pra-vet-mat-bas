#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor[5];
    int auxiliar;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (vetor[i] > vetor[j])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Posição %d, índice %d, número armazenado: %d\n", i + 1, i, vetor[i]);
    }
    return 0;
}
