#include<stdio.h>

void affDiv(int n)
{
  int res = n;
  while(res > 0)
    {
      res = res / 2;
      printf("%d\n", res);
    }
}
  

int main()
{
  printf("Entrez un nombre : ");
  int n = 0;
  scanf("%d", &n);
  affDiv(n);
  return 0;
}
