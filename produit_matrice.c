
#include <stdio.h>

int main() {
    int U[100][100], V[100][100], P[100][100];
    int lignes1, colonnes1, lignes2, colonnes2;

    printf("Entrez le nombre de lignes de la première matrice : ");
    scanf("%d", &lignes1);
    printf("Entrez le nombre de colonnes de la première matrice : ");
    scanf("%d", &colonnes1);

    printf("Entrez les éléments de la première matrice :\n");
    for (int i = 0; i < lignes1; i++) {
        for (int j = 0; j < colonnes1; j++) {
            printf("U[%d][%d] : ", i, j);
            scanf("%d", &U[i][j]);
        }
    }

    printf("Entrez le nombre de lignes de la deuxième matrice : ");
    scanf("%d", &lignes2);
    printf("Entrez le nombre de colonnes de la deuxième matrice : ");
    scanf("%d", &colonnes2);

    if (colonnes1 != lignes2) {
        printf("Erreur : Les matrices ne sont pas compatibles pour la multiplication.\n");
        return 1;
    }

    printf("Entrez les éléments de la deuxième matrice :\n");
    for (int i = 0; i < lignes2; i++) {
        for (int j = 0; j < colonnes2; j++) {
            printf("V[%d][%d] : ", i, j);
            scanf("%d", &V[i][j]);
        }
    }

    for (int i = 0; i < lignes1; i++) {
        for (int j = 0; j < colonnes2; j++) {
            P[i][j] = 0;
            for (int k = 0; k < colonnes1; k++) {
                P[i][j] += U[i][k] * V[k][j];
            }
        }
    }

    printf("Le produit des matrices est :\n");
    for (int i = 0; i < lignes1; i++) {
        for (int j = 0; j < colonnes2; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
