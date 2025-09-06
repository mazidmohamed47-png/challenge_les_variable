#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float distance_euclidienne ,Distance, x1,x2,y1,y2,z1,z2;
    printf("veuillez entrer les cordoner de A : ");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("veuillez entrer les cordoner de B : ");
    scanf("%f %f %f",&x2,&y2,&z2);
    Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("la distance euclidienne est : %.2f",Distance);
    return 0;
}
