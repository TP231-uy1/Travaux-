#include <stdio.h>

int main() {
    int matrice1[100][100], matrice2[100][100], resultat[100][100];
    int lignes, colonnes;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Entrez le nombre de colonnes : ");
    scanf("%d", &colonnes);

    printf("\nEntrez les éléments de la première matrice :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Matrice1[%d][%d] : ", i, j);
            scanf("%d", &matrice1[i][j]);
        }
    }

    printf("\nEntrez les éléments de la deuxième matrice :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Matrice2[%d][%d] : ", i, j);
            scanf("%d", &matrice2[i][j]);
        }
    }

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            resultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }

    printf("\nLa somme des matrices est :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", resultat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
