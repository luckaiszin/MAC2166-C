#include <stdio.h>

#define MAX 100

int main()
{

    int N, A[MAX][MAX];

    int i, j;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Diagonais
    i = j = 0;
    // Principal
    int p = 0;

    for (; i < N; i++)
    {
        if (A[i][j] == 0)
            p++;
        j++;
    }
    if (p == 4)
    {
        printf("Diagonal principal nula");
        return 0;
    }

    // Secundaria
    int s = 0;
    j=0;
    for (i = 3; i >= 0; i--)
    {
        if (A[i][j] == 0)
            s++;
        j++;
    }
    if (s == 4)
    {
        printf("Diagonal secundaria nula");
        return 0;
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (A[i][j] == 0)
            {

                // Linha
                int l = 0;

                for (j = 0; j < N; j++)
                {
                    if (A[i][j] == 0)
                        l++;
                }
                if (l == 4)
                {
                    printf("Linha %d nula", i);
                    return 0;
                }

                // Coluna
                int c = 0;
                for (i = 0; i < N; i++)
                {
                    if (A[i][j] == 0)
                        c++;
                }
                if (c == 4)
                {
                    printf("Coluna %d nula", j);
                    return 0;
                }
            }
        }
    }

    printf("Matriz nao contem fila de zeros\n");

    return 0;
}