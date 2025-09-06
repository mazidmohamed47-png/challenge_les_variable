#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,ms;
    printf("veuillez entrer la vetess en km/h : ");
    scanf("%f",&km);
    ms=km*0.27778;
    printf("la vetess en m/s est : %.2f",ms);
    return 0;
}
