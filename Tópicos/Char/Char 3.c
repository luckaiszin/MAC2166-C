#include <stdio.h>



int is_alnum(char c);


int main(){

    char C;
    int carac = 0;
    int palavra = 0;

    do{
        scanf("%c",&C);
        if(is_alnum(C)|| C == ' ' ) carac++;
        if(C == ' ') palavra++;
    }
    while( C != '.');

    printf("%d characters / %d words\n", carac, palavra +1);
   

    return 0;
}


int is_alnum(char c)
{
  if ('A' <= c && c <= 'Z') return 1;
  if ('a' <= c && c <= 'z') return 1;
  if ('0' <= c && c <= '9') return 1;
  return 0;
}