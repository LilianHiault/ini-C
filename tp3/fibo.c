#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
  int * fibo = malloc(n * sizeof(int));
  if(n == 0)
    {
      return 0;
    }
  else if(n == 1)
    {
      return 1;
    }
  fibo[0] = 0;
  fibo[1] = 1;
  int i;
  for(i=2; i<=n; i++)
    {
      fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
  int result = fibo[n ];
  free(fibo);
  return result;
}

int fiboRecursif(int n)
{
  if(n == 0)
    {
      return 0;
    }
  else if(n == 1)
    {
      return 1;
    }
  else
    {
      return fiboRecursif(n - 1) + fiboRecursif(n - 2);
    }
}
  

int main()
{
  int n;
  printf("Entrez n : \n");
  scanf("%d", &n);
  printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
  printf("FiboRecursif(%d) = %d\n", n, fiboRecursif(n));
  return 0;
}
