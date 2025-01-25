#include <stdio.h>

#define MMAX 100
#define NMAX 100

int conte_minas(int A[][NMAX + 2], int i, int j);
void leia_tab(int A[][NMAX + 2], int i, int j);
void moldura(int A[][NMAX + 2],int i,int j);
void imprima_tab(int A[][NMAX + 2], int M, int N);

int main(){

    int A[MMAX+2][NMAX+2],M,N;
    int c;
    int i,j;
    scanf("%d %d", &M,&N);

    leia_tab(A,M,N);
   
    moldura(A,M,N);

    for(i=1;i<=M;i++){
        for(j=1;j<=N;j++){

            if(A[i][j]==0){
                c=conte_minas(A,i,j);
                A[i][j]=c;
            }
        }
    }

    imprima_tab(A,M,N);

    return 0;
}

int conte_minas(int A[][NMAX + 2], int i, int j){

    int c=0;
    int x,y;
    
    for(x=i-1;x<i+2;x++){
        for(y=j-1;y<j+2;y++){

            if(A[x][y]==-1) c++;
        }
    }

    return c;
}

void leia_tab(int A[][NMAX + 2], int i, int j){

    int x,y;

    for(x=1;x<=i;x++){
        for(y=1;y<=j;y++){
            scanf("%d", &A[x][y]);
        }
    }
}

void moldura(int A[][NMAX + 2],int M,int N){
    int i,j;

    for(i=0;i<M+2;i++){
        A[i][0]=A[i][N+1]=-2;
    }

    for(j=0;j<N+2;j++){
        A[0][j]=A[M+1][j]=-2;
    }
}

void imprima_tab(int A[][NMAX + 2], int M, int N)
{
  int i, j;
  for (i = 1; i <= M; i++) {
    for (j = 1; j <= N; j++)
      printf(" %2d", A[i][j]);
    printf("\n");
  } 
}