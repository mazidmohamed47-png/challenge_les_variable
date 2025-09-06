#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Surface , Longeur , Largeur ;
    printf("veuillez entrer longeur de rectangle : ");
    scanf("%f",&Longeur);
    printf("veuillez entrer Largeur de rectangle : ");
    scanf("%f",&Largeur);
    Surface=Longeur*Largeur;
    printf("la Surface de rectangle est : %.2f",Surface);
    return 0;
}
