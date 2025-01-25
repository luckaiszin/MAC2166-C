#include <stdio.h>

int main (){


    int n;
    scanf("%d",&n);
    int i;
    double x;
    double y;
    int H=0;
    for(i=0;i<n;i++){
        int H1=0;
        int H2=0;
        scanf("%lf  %lf",&x,&y);

        if(x<=0 && y<=0 && (y+(x*x)+(2*x*x)<=0)){
            H1++;
        }

        if(x>=0 && (y+(x*x)+(2*x*x)<=0)){
            H2++;
        }

        if(H1==1 && H2==1){
            printf("(%.4f,%.4f) pertence a H\n", x,y);
            H++;
        }
        else printf("(%.4f,%.4f) nao pertence a H\n", x,y);
    }

    printf("%d pontos pertencem a H",H);


    return 0;
}