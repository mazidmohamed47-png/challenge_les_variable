#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float rayon , volume ;
    const float pi = 3.14159;
    printf("veuillez entrer la valeur de rayon de sphere : ");
    scanf("%f",&rayon);
    volume=(4*pi*pow(rayon,3))/3;
    printf("le volume dune sphere est : %.2f",volume);
    return 0;
}
