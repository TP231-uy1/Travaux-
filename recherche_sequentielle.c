#include <stdio.h>
int main() {
    int tableau[100], n, elementRecherche, i, trouve = 0;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &elementRecherche);

    for (i = 0; i < n; i++) {
        if (tableau[i] == elementRecherche) {
            trouve = 1;
            break;
        }
    }

    if (trouve == 1) {
        printf("L'élément %d est présent dans le tableau à la position %d\n", elementRecherche, i);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau\n", elementRecherche);
    }

    return 0;
}
