#include <stdio.h>
#include <stdlib.h>

int main()
{
    float yards,km;
    printf("veullez entrer la distance exprimee en kilometres : ");
    scanf("%f",&km);
    yards=km*1093.61;
    printf("en yards  est : %f",yards);
    return 0;
}
