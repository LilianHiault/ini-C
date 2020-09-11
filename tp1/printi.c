#include<stdio.h>

int main()
{
    int i = 0;

    if (i == -1)  printf("i vaut -1\n");
    if (i != -1)  printf("i est différent de -1\n");
    if (i != 0)   printf("i est non nul\n");
    if (i)        printf("i est non nul également\n");
    if (i == 0)   printf("i est nul\n");
    if (!i)       printf("i est nul encore !\n");
    if ((i>=0) && (i<=10)) printf("i est petit\n");
    if ((i>3) || (i<-3)) printf("i est hors intervalle\n");     
    return 0;
}
