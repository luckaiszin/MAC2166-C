#include <stdio.h>

#define MAX 33

int main()
{

    int N;
    int q;
    int i, j, k;
    int A[MAX][MAX];

    scanf("%d", &N);
    scanf("%d", &q);

    for (i = 0; i < N + 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            A[i][j] = 0;

            if(j==0) A[i][j] = 1;
            else{
            for (k = j - 1; k < i; k++)
            { 
                A[i][j] += A[k][j - 1];
                
            }
            }
        }
        if (i == j)
            A[i][j] = 1;
    }

    for (i = 0; i < N + 1; i++)
    {
        printf("\n");
        for (j = 0; j <=i; j++)
        {
            printf("%d ", A[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < N + 1; i++)
    {
        printf("\n");
        for (j = 0; j <=i; j++)
        {
            printf("%d ", (A[i][j])%q);
        }
    }

    return 0;
}