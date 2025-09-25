#include <stdio.h>

#define TAILLE 5

void afficherTableau(int tableau[], int taille);
void inverserTableau(int tableau[], int taille);

int main() {
    int tableau[TAILLE] = {1, 2, 3, 4, 5};
    
    printf("Tableau original : ");
    afficherTableau(tableau, TAILLE);
    
    inverserTableau(tableau, TAILLE);
    
    printf("Tableau inverse : ");
    afficherTableau(tableau, TAILLE);
    
    return 0;
}

void afficherTableau(int tableau[], int taille) {
    int i;
    printf("[");
    for (i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void inverserTableau(int tableau[], int taille) {
    int i, temp;
    for (i = 0; i < taille / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille - 1 - i];
        tableau[taille - 1 - i] = temp;
    }
}