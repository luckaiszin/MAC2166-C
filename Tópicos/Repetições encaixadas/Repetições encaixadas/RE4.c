#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int soma=0;
    int i;
    int j;

    for(i=2;i<=n;i++){
        int c=0;
        for(j=1;j<=i;j++){
            if(i%j==0) c++;
        }
    
        if(c==2) soma=soma+i;

        }

        printf("Soma: %d",soma);

    return 0;
}
