#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chiffres,a,b,c,d ;
    printf("veuillez entrer les 4 chiffres : ");
    scanf("%d",&chiffres);
    a=(chiffres/1000);
    b=(chiffres/100)%10;
    c=(chiffres/10)%10;
    d=chiffres%10;
    printf("inverse est : %d%d%d%d",d,c,b,a);
    return 0;
}
