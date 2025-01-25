#include <stdio.h>

#define MAX 100

int main()
{

    double A[MAX][MAX];
    double B[MAX][MAX];
    double C[MAX][MAX];
    int L, M, N;
    int i, j, k;

    scanf("%d %d %d", &L, &M, &N);

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%lf", &B[i][j]);
        }
    }

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (i = 0; i < L; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            printf("%f ", C[i][j]);
        }
    }
    printf("\n");

    return 0;
}