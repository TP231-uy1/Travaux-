#include <stdio.h>

int main() {
    int a, b, c = 0;

    printf("Entrez la valeur de a (a > 0) : ");
    scanf("%d", &a);
    printf("Entrez la valeur de b (b > 0) : ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Erreur : a et b doivent être supérieurs à 0.\n");
        return 1; // Indique une erreur
    }

    for (int i = 0; i < b; i++) {
        c += a;
    }

    printf("Le résultat de %d * %d est : %d\n", a, b, c);

    return 0;
}
