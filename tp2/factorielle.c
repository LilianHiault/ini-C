#include<stdio.h>

long int factorielle(int n)
{
  long int facto = 1;
  int i;
  for(i=2; i<=n; i++)
    {
      facto = facto * i;
    }
  return facto;
}

long int factoRecursive(int n)
{
  if(n > 1)
    {
      return n * (factoRecursive(n - 1));
    }
  else
    {
      return 1;
    }
}

int main()
{
  int n = 0;
  printf("Factorielle de n avec n = ");
  scanf("%d", &n);
  printf("Factorielle(%d) = %ld\n", n, factorielle(n));
  printf("FactoRecursive(%d) = %ld\n", n, factoRecursive(n));
  return 0;
}
