#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,M;
    printf("veuillez entrer le premier note : ");
    scanf("%f",&a);
    printf("veuillez entrer la deuxeme note : ");
    scanf("%f",&b);
    printf("veuillez entrer le troixem note : ");
    scanf("%f",&c);
    M = (a*2+b*3+c*5)/(2+3+5);
    printf("la moyenne ponderee est : %f",M);
    return 0;
}
