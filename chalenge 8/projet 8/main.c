#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,M;
     printf("veuillez entrer le premier nomber : ");
    scanf("%f",&a);
    printf("veuillez entrer la deuxeme nomber : ");
    scanf("%f",&b);
    printf("veuillez entrer le troixem nomber : ");
    scanf("%f",&c);
    M = sqrt(a*b*c);
    printf("la moyenne geometrique est : %.2f",M);
    return 0;
}
