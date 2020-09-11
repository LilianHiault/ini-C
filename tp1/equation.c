#include<stdio.h>
#include<math.h>

int main()
{
  printf("Entrez les coefficients a, b et c de l'équation ax^2 + bx + c :\n");
  float a, b, c;
  a = b = c = 0;
  scanf("%f%f%f", &a, &b, &c);
  printf("%fx^2 + %fx + %f\n", a, b, c);
  float delta = b * b - 4 * a * c;
  printf("Delta : %f\n", delta);
  if (delta > 0)
    {
      float x1 = (-b - sqrt(delta)) / 2 * a;
      float x2 = (-b + sqrt(delta)) / 2 * a;
      printf("Les solutions sont %f et %f\n", x1, x2);
    }
  if (delta == 0)
    {
      float x = -b / 2 * a;
      printf("La solution de l'équation est %f\n", x);
    }
  else
    {
      printf("L'équation n'a pas de solution réelle !\n");
    }
  return 0;
}
