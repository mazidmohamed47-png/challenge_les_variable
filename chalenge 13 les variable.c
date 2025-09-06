#include <stdio.h>

void Binaire(int n) {
    if (n > 1)
        Binaire(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Entrez un entier decimal : ");
    scanf("%d", &n);

    printf("Hexadecimal : %x\n", n);
    printf("Binaire : ");
    Binaire(n);
    printf("\n");

    return 0;
}

