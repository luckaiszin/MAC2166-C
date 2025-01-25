#include <stdio.h>

#define LETRAS 26

int main()
{
    int freq[LETRAS];
    char frase[] = "O Urubu do Belzebu tomou no cu.";
    int i,n_chars=0; 
    
    for(i=0;i<LETRAS;i++){
        freq[i]=0;
    }

    for(i=0;frase[i] != '\0';i++){
        n_chars++;
        if ('a' <= frase[i] && frase[i] <= 'z')
            freq[frase[i]-'a']++;

    }
    printf("total: %d\n", n_chars);

    for (i = 0; i < LETRAS; ++i){
    if (freq[i] > 0)
      printf("%c: %d\n", 'a' + i, freq[i]);
    }

    return 0;
}