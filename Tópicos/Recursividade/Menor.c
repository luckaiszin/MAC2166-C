#include <stdio.h>

int menor(int V[], int tamanho)
{

    if (tamanho == 1)
        return V[0];

    if (V[tamanho - 1] < V[0])
        V[0] = V[tamanho - 1];
        
    V[0]=menor(V, tamanho - 1);
    return V[0];
}

int main()
{

    int V[6] = {34, -16, 5, 4, 51, 23};
    printf("o menor elemento do vetor eh: %d\n", menor(V, 6));
    return 0;
}