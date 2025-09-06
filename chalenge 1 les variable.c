#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[20] , Prenom[20] , Sexe[10] , Adresse_email[50] ;
    int Age ;
    printf("veuillez entrer le nome : ");
    scanf("%s",&Nom);
    printf("veuillez entrer le prenom : ");
    scanf("%s",&Prenom);
    printf("veuillez entrer le sexe : ");
    scanf("%s",&Sexe);
    printf("veuillez entrer l Age : ");
    scanf("%d",&Age);
    printf("veuillez entrer l Adresse email : ");
    scanf("%s",&Adresse_email);

    printf("Nom : %s\n",Nom);
    printf("Prenom : %s\n",Prenom);
    printf("Age : %s\n",Sexe);
    printf("Sexe : %d\n",Age);
    printf("Adresse email : %s\n",Adresse_email);
    return 0;
}
