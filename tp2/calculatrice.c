#include<stdio.h>

int main()
{
  char operation = '+';
  float a, b;
  a = b = 0.0;
  printf("Entrez le signe de l'opération puis les deux nombres :\n");
  scanf("%c%f%f", &operation, &a, &b);
  float resultat = 0.0;
  switch(operation)
    {
    case '+' :
      resultat = a + b;
      break;
    case '-' :
      resultat = a - b;
      break;
    case '*' :
      resultat = a * b;
      break;
    case '/' :
      resultat = a / b;
      break;
    default:
      printf("Opération invalide\n");
    }
  printf("%f\n", resultat);
  return 0;
}
