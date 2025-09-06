#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    printf("veuillez entrer la valeur de temperature de l eau : ");
    scanf("%d",&T);
    if (T<0)
        printf("lètat de l'eau est Solide .");
    else if (T>=0 && T<100)
    printf("lètat de l'eau est liquide ");
    else
        printf("lètat de l'eau est Gaze");
    return 0;
}
