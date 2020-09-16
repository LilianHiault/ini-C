#include<stdio.h>
#include<string.h>

#define N 100

int main()
{
  int i;
  for(i=32; i<128; i++)
    {
      printf("%c", i);
    }
  printf("\n");
  char phrase[N];
  fgets(phrase, N, stdin);
  printf("%s\n", phrase);

  char c = 'a';
  int n = (int) strlen(phrase);
  for(i=0; i<n; i++)
    {
      c = phrase[i];
      phrase[i] = (('a' <= c) && (c <= 'z')) ? c + 'A' - 'a' : c;
    }
  printf("%s\n", phrase);
  return 0;
}
