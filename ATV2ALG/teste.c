#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, aux, cont, quant, trocas=0, j;
    scanf("%d", &quant);
    int numeros[quant];
    for (i = 0; i < quant; i++) 
    {
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < quant; i++) 
    {
        if(i == quant-1)
        {
            printf("%d\n", numeros[i]);
        }
        else
        {
            printf("%d ", numeros[i]);
        }
    }
    for (cont = 1; cont < quant; cont++) 
    {
        for (i = 0; i < quant - 1; i++)
        {
            if (numeros[i] > numeros[i + 1]) 
            {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
                for (j = 0; j < quant; j++) 
                {
                    if(j == quant-1)
                    {
                        printf("%d\n", numeros[j]);
                    }
                    else
                    {
                        printf("%d ", numeros[j]);
                    }
                }
                trocas++;
            }
        }
    }
    for (i = 0; i < quant; i++) 
    {
        if(i == quant-1)
        {
            printf("%d\n", numeros[i]);
        }
        else
        {
            printf("%d ", numeros[i]);
        }
    }
    printf("Trocas: %d\n", trocas);
    return 0;
}