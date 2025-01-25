#include <stdio.h>

int main (){

  int m;
  scanf("%d",&m);
  int n;
  scanf("%d",&n);
  int a=m;
  int b=n;

 if(m<n) {
     n=a;
     m=b;
 }

    int x;
    int y;
    int v;

    int maior =0;
    int xmax=0;
    int ymax=0;

    

    for(x=0;x<=m;x++){
        for(y=0;y<=n;y++){
            v= (x*y)-x*x+y;
            if(v>maior) {maior = v;
            xmax=x;
            ymax=y;
        }
        }
    }
        printf("(%d,%d)",xmax,ymax);
    return 0;
}