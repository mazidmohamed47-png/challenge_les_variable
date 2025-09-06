#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B;
    printf("veullez entrer le premier nomber : ");
    scanf("%f",&A);
    printf("veullez entrer le deuxieme  nomber : ");
    scanf("%f",&B);
    printf("la Addition est : %.2f + %.2f = %.2f\n",A,B,A+B);
    printf("la Soustraction est : %.2f - %.2f=%.2f\n",A,B,A-B);
    printf("la Miltiplication est : %.2f * %.2f=%.2f\n",A,B,A*B);
    printf("la Division est : %.2f / %.2f = %.2f\n",A,B,A/B);
    return 0;
}
