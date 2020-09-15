#include<stdio.h>

#define N 10

void ecrireN()
{
  int i;
  for(i=0; i<N; i++)
    {
      printf("Hello world (%d)!\n", i);
    }
}

int main() {
  ecrireN();
  return 0;
}
