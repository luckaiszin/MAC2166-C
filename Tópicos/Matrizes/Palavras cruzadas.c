#include <stdio.h>

#define NMAX 50

int main()
{

    int P[NMAX][NMAX];

    int M, N;

    int i, j, k;

    int c = 0;

    scanf("%d %d", &M, &N);

    /// Aplicando a moldura

    for (j = 0; j < N; j++)
    {
        P[0][j] = -2;
        P[M + 1][j] = -2;
    }

    for (i = 0; i < M; i++)
    {
        P[i][0] = -2;
        P[i][N + 1] = -2;
    }

    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)
        {
            scanf("%d", &P[i][j]);
        }
    }

    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (P[i][j] == 0)
            {
                
                if ((P[i][j - 1] <= -1) || (P[i-1][j] <= -1))
                {
                    P[i][j] = 1;
                }

                if((P[i-1][j] && P[i-+1][j])<=0) P[i][j] = 0;
            }

            
        }
    }

    for (i = 1; i <= M; i++)
    {
        printf("\n");
        for (j = 1; j <= N; j++)
        {
            printf("%2d ", P[i][j]);
        }
    }

    printf("\n");

    return 0;
}