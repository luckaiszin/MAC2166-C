/***************************************************************/
/**                                                           **/
/**   Lucas Pates Rodrigues                     11545304      **/
/**   Exercício-Programa 03                                   **/
/**   Professor: Yoshiharu Kohayakawa                         **/
/**   Turma: 03                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define NMAX 100

void generate(int N, int b, int c, int r, int f, int v);
int valid(int a[], int i, int v);
int Teste(int a[], int N, int b, int c, int r);
void zerar_matriz(int a[][NMAX], int N);
void ataque(int a[][NMAX], int M, int N, int S, int b, int c, int r);
int fill(int a[], int i, int j, int N, int b, int c, int r);
void imprimir_Matriz(int a[][NMAX], int N);
void frequencia(double A[][NMAX], int T, int N);

int main(int argc, char *argv[])
{

    int N = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int r = atoi(argv[4]);
    int f = atoi(argv[5]);
    int v = atoi(argv[6]);
    generate(N, b, c, r, f, v);
    return 0;
}

void generate(int N, int b, int c, int r, int f, int v)
{
    int a[NMAX];
    int A[NMAX][NMAX];
    zerar_matriz(A, N);
    double S[NMAX][NMAX];
    zerar_matriz(S, N);
    int i, j;
    int l = 0, k = 0;
    int T = 0;
    int g;

    while (TRUE)
    {
        /* a[0..i - 1] ja definido.
           Queremos fazer a[i] = k */
        if (k == N)
            if (l == 0)
                break;
            else
                k = a[--l] + 1;
        else
        {
            if (!valid(a, l, k))
            {
                k++;
                continue;
            }
            a[l++] = k;
            /* Gera o vetor da permutação */
            k = 0;
            if (l == N)
            {
                /* Testa se a posição estã livre */
                g = Teste(a, N, b, c, r);
                if (g)
                {
                    T++; /* Incrementa no total de soluções */
                    for (i = 0; i < N; i++)
                    {
                        for (j = 0; j < N; j++)
                        {
                            A[i][j] = fill(a, i, j, N, b, c, r);
                            /* Preenche o tabuleiro com a Rainha e seus ataques */
                            if (A[i][j] == 1)
                                S[i][j] += A[i][j];
                            /* Incrementa a posição da Rainha na Matriz de frequência */
                        }
                    }
                    if (v == 1)
                        imprimir_Matriz(A, N);
                }
                k = a[--l] + 1;
            }
        }
    }

    if (T != 0)
    {
        printf("Total de solucoes: %d\n", T);
        if (f == 1)
        {
            printf("\nMapa de frequencias");
            frequencia(S, T, N);
        }
    }
    else
    {
        printf("Nao ha solucao\n");
        if (f == 1)
            printf("Mapa de frequencias indefinido (nao ha solucao)\n");
    }
}

int valid(int a[], int i, int v)
{
    int j;
    for (j = 0; j < i; ++j)
        if (a[j] == v)
            return FALSE;
    return TRUE;
}

int Teste(int a[], int N, int b, int c, int r)
{
    int P[NMAX][NMAX];
    zerar_matriz(P, N);
    int l;
    int k = 0;

    for (l = 0; l < N; ++l)
    {
        /* Testa se a posição estã livre */
        if (P[l][(a[l])] == 0)
        {
            /* Em caso afirmativo, ataca as casas com os
            movimentos das peças */
            ataque(P, l, a[l], N, b, c, r);
            k++;
        }
        else
            return FALSE;
    }
    return TRUE;
}

void ataque(int a[][NMAX], int M, int N, int S, int b, int c, int r)
{

    int i, j;

    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            /* Torre*/
            if ((i == M) && (j == N))
            {
                a[i][j] = 1;
            }
            else if ((i == M) || (j == N))
            {
                a[i][j] = -1;
            }
            /* Bispo*/
            if (b == 1)
            {
                if ((i == M) && (j == N))
                {
                    a[i][j] = 1;
                }
                else if ((i - M) == (j - N))
                {
                    a[i][j] = -1;
                }
                else if ((i - M) == (N - j))
                {
                    a[i][j] = -1;
                }
            }
            /* Cavalo*/
            if (c == 1)
            {
                if ((i == M) && (j == N))
                {
                    a[i][j] = 1;
                }
                else if ((i == M - 2) && ((j == N - 1) || (j == N + 1)))
                {
                    a[i][j] = -1;
                }
                else if (((i == M - 1) || (i == M + 1)) && ((j == N - 2) || (j == N + 2)))
                {
                    a[i][j] = -1;
                }
                else if ((i == M + 2) && ((j == N - 1) || (j == N + 1)))
                {
                    a[i][j] = -1;
                }
            }
            /* Rei*/
            if (r == 1)
            {
                if ((i == M) && (j == N))
                {
                    a[i][j] = 1;
                }
                else if (((M >= i - 1) && (M <= i + 1)) && ((N >= j - 1) && (N <= j + 1)))
                {
                    a[i][j] = -1;
                }
            }
        }
    }
}

void zerar_matriz(int a[][NMAX], int N)
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = 0;
        }
    }
}

void imprimir_Matriz(int a[][NMAX], int N)
{

    int i, j;

    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            if (a[i][j] == 1)
                printf("X ");
            else
                printf("- ");
        }
    }
    printf("\n");
}

int fill(int a[], int i, int j, int N, int b, int c, int r)
{

    int P[NMAX][NMAX];
    zerar_matriz(P, N);
    int l;
    int k = 0;

    for (l = 0; l < N; ++l)
    {
        if (P[l][(a[l])] == 0)
        {
            ataque(P, l, a[l], N, b, c, r);
            k++;
        }
    }

    return P[i][j];
}

void frequencia(double A[][NMAX], int T, int N)
{

    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = A[i][j] / T;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            printf("%.4f ", A[i][j]);
        }
    }
    printf("\n");
}