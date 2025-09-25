#include <stdio.h>
#include <stdbool.h> // Pour le type booléen

int main() {
    int tableau[100], n, i;
    bool estTrié = true;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n - 1; i++) {
        if (tableau[i] > tableau[i + 1]) {
            estTrié = false;
            break;
        }
    }

    if (estTrié) {
        printf("Le tableau est trié.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }

    return 0;
}
