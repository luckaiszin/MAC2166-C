#include <stdio.h>

#define MMAX 1000
#define NMAX 1000


int main(){

    int M, N, i, j, k;
  int a[MMAX], b[NMAX], c[MMAX + NMAX];

  scanf("%d %d", &M, &N);

  for (i = 0; i < M; ++i) 
    scanf("%d", &a[i]);

  for (j = 0; j < N; ++j) 
    scanf("%d", &b[j]);

    i = j = 0;
    for (k = 0; k < M + N; ++k) {
    if (i == M) c[k] = b[j++];
    else if (j == N) c[k] = a[i++];
    else if (a[i] <= b[j])
      c[k] = a[i++];
    else 
      c[k] = b[j++];
  } 

    
  for (k = 0; k < M + N; ++k)
    printf("%d ", c[k]);


  printf("\n");

    return 0;
}