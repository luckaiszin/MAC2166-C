#include <stdio.h>

#define TRUE 1
#define FALSE 0

int vowel(char c);
int letter(char c);

int main()
{
  char c;
  int v = 0, l = 0;

  do {
    scanf("%c", &c);
    if (vowel(c)) v++;
    if (letter(c)) l++;
  } while (c != '.');

  printf("frequencia de vogais = %d / %d = %f\n", v, l, 1.0*v/l);
  
  return 0;
}

int vowel(char c)
{
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return TRUE;
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return TRUE;
  return FALSE;
}

int letter(char c)
{
  if ('A' <= c && c <= 'Z')
    return TRUE;
  if ('a' <= c && c <= 'z')
    return TRUE;
  return FALSE;
}
