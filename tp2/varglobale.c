#include<stdio.h>

int globale = 4;


void modifGlobale(locale)
{
  globale = 42;
  locale = 32;
}


int main(int argc, char * argv[]) {
  (void) argc;
  (void) argv;
  int locale = 23;
  printf("globale : %d; locale : %d\n", globale, locale);
  modifGlobale(23);
  printf("globale : %d; locale : %d\n", globale, locale);
  return 0;
}
