#include <stdio.h>

#define VECTEUR_SIZE 3
#define MATRICE_LIGNES 3
#define MATRICE_COLONNES 2

void initialiserVecteur(int vecteur[], int taille);
void initialiserMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes);
void afficherVecteur(int vecteur[], int taille);
void afficherMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes);
void produitVecteurMatrice(int vecteur[], int matrice[][MATRICE_COLONNES], int resultat[], int vecteurSize, int lignes, int colonnes);

int main() {
    printf("PRODUIT VECTEUR-MATRICE\n\n");
    
    int vecteur[VECTEUR_SIZE];
    int matrice[MATRICE_LIGNES][MATRICE_COLONNES];
    int resultat[MATRICE_COLONNES];
    
    initialiserVecteur(vecteur, VECTEUR_SIZE);
    initialiserMatrice(matrice, MATRICE_LIGNES, MATRICE_COLONNES);
    
    printf("Donnees initiales :\n");
    printf("Vecteur : ");
    afficherVecteur(vecteur, VECTEUR_SIZE);
    printf("Matrice :\n");
    afficherMatrice(matrice, MATRICE_LIGNES, MATRICE_COLONNES);
    
    if (VECTEUR_SIZE != MATRICE_LIGNES) {
        printf("Erreur : Dimensions incompatibles !\n");
        return 1;
    }
    
    produitVecteurMatrice(vecteur, matrice, resultat, VECTEUR_SIZE, MATRICE_LIGNES, MATRICE_COLONNES);
    
    printf("\nResultat du produit vecteur-matrice : ");
    afficherVecteur(resultat, MATRICE_COLONNES);
    
    return 0;
}

void initialiserVecteur(int vecteur[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        vecteur[i] = i + 1;
    }
}

void initialiserMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes) {
    int i, j, compteur = 1;
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            matrice[i][j] = compteur++;
        }
    }
}

void afficherVecteur(int vecteur[], int taille) {
    int i;
    printf("[");
    for (i = 0; i < taille; i++) {
        printf("%d", vecteur[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void afficherMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes) {
    int i, j;
    for (i = 0; i < lignes; i++) {
        printf("  [");
        for (j = 0; j < colonnes; j++) {
            printf("%3d", matrice[i][j]);
            if (j < colonnes - 1) {
                printf(" ");
            }
        }
        printf("]\n");
    }
}

void produitVecteurMatrice(int vecteur[], int matrice[][MATRICE_COLONNES], int resultat[], int vecteurSize, int lignes, int colonnes) {
    int i, j;
    for (j = 0; j < colonnes; j++) {
        resultat[j] = 0;
    }
    
    for (j = 0; j < colonnes; j++) {
        for (i = 0; i < lignes; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}
#include <stdio.h>

#define VECTEUR_SIZE 3
#define MATRICE_LIGNES 3
#define MATRICE_COLONNES 2

void initialiserVecteur(int vecteur[], int taille);
void initialiserMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes);
void afficherVecteur(int vecteur[], int taille);
void afficherMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes);
void produitVecteurMatrice(int vecteur[], int matrice[][MATRICE_COLONNES], int resultat[], int vecteurSize, int lignes, int colonnes);

int main() {
    printf("PRODUIT VECTEUR-MATRICE\n\n");
    
    int vecteur[VECTEUR_SIZE];
    int matrice[MATRICE_LIGNES][MATRICE_COLONNES];
    int resultat[MATRICE_COLONNES];
    
    initialiserVecteur(vecteur, VECTEUR_SIZE);
    initialiserMatrice(matrice, MATRICE_LIGNES, MATRICE_COLONNES);
    
    printf("Donnees initiales :\n");
    printf("Vecteur : ");
    afficherVecteur(vecteur, VECTEUR_SIZE);
    printf("Matrice :\n");
    afficherMatrice(matrice, MATRICE_LIGNES, MATRICE_COLONNES);
    
    if (VECTEUR_SIZE != MATRICE_LIGNES) {
        printf("Erreur : Dimensions incompatibles !\n");
        return 1;
    }
    
    produitVecteurMatrice(vecteur, matrice, resultat, VECTEUR_SIZE, MATRICE_LIGNES, MATRICE_COLONNES);
    
    printf("\nResultat du produit vecteur-matrice : ");
    afficherVecteur(resultat, MATRICE_COLONNES);
    
    return 0;
}

void initialiserVecteur(int vecteur[], int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        vecteur[i] = i + 1;
    }
}

void initialiserMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes) {
    int i, j, compteur = 1;
    for (i = 0; i < lignes; i++) {
        for (j = 0; j < colonnes; j++) {
            matrice[i][j] = compteur++;
        }
    }
}

void afficherVecteur(int vecteur[], int taille) {
    int i;
    printf("[");
    for (i = 0; i < taille; i++) {
        printf("%d", vecteur[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void afficherMatrice(int matrice[][MATRICE_COLONNES], int lignes, int colonnes) {
    int i, j;
    for (i = 0; i < lignes; i++) {
        printf("  [");
        for (j = 0; j < colonnes; j++) {
            printf("%3d", matrice[i][j]);
            if (j < colonnes - 1) {
                printf(" ");
            }
        }
        printf("]\n");
    }
}

void produitVecteurMatrice(int vecteur[], int matrice[][MATRICE_COLONNES], int resultat[], int vecteurSize, int lignes, int colonnes) {
    int i, j;
    for (j = 0; j < colonnes; j++) {
        resultat[j] = 0;
    }
    
    for (j = 0; j < colonnes; j++) {
        for (i = 0; i < lignes; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
}