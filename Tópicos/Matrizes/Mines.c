#include <stdio.h>

#define MMAX 100
#define NMAX 100

int conte_minas(int A[][NMAX + 2], int i, int j);
void monte_tab(int A[][NMAX + 2], int M, int N);
void leia_tab(int A[][NMAX + 2], int M, int N);
void imprima_tab(int A[][NMAX + 2], int M, int N);

int main()
{
    int M, N, A[MMAX + 2][NMAX + 2];

    scanf("%d %d", &M, &N);

    leia_tab(A, M, N);
    monte_tab(A, M, N);
    imprima_tab(A, M, N);

    return 0;
}

int conte_minas(int A[][NMAX + 2], int i, int j)
{
    int t = 0, a, b;

    for (a = -1; a <= 1; a++)
        for (b = -1; b <= 1; b++)
            if (A[i + a][j + b] == -1)
                t++;

    return t;
}

void monte_tab(int A[][NMAX + 2], int M, int N)
{
    int i, j;
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
            if (A[i][j] == 0)
                A[i][j] = conte_minas(A, i, j);
}

void leia_tab(int A[][NMAX + 2], int M, int N)
{
    int i, j;
    for (i = 1; i <= M; i++)
        for (j = 1; j <= N; j++)
            scanf("%d", &A[i][j]);

    /* moldura */
    for (i = 0; i < M + 2; i++)
        A[i][0] = A[i][N + 1] = -2;

    for (j = 0; j < N + 2; j++)
        A[0][j] = A[M + 1][j] = -2;
}

void imprima_tab(int A[][NMAX + 2], int M, int N)
{
    int i, j;
    for (i = 1; i <= M; i++)
    {
        for (j = 1; j <= N; j++)
            printf(" %2d", A[i][j]);
        printf("\n");
    }
}