# include <stdio.h>
/*
* Definition de la structure vecteur 3D
* Cette structure permet de stocker les 3 composantes d'un vecteur
*/
typedef struct{
    float x; // composante x : coordonnee horizontale
    float y; // composante y : coordonnee verticale 
    float z; // composante z : profondeur dans l'espace 3D
} vecteur3D;
/*
* Fonction pour calculer le produit vectoriel
* prend deux vecteurs en parametre et retourne leur produit vectoriel
*/
vecteur3D produit_vectoriel(vecteur3D u,vecteur3D v){
vecteur3D resultat; // variable qui va stocker le resultat
/* calcul de chaque composante selon la formule mathematiques*/
resultat.x = u.y * v.z - u.z * v.y; // U2V3 - U3V2
resultat.y = u.z * v.x - u.x * v.z; // U3V1 - U1V3
resultat.z = u.x * v.y - u.y* v.x; // U3V1 - U1V3
return resultat; // retourne le vecteur resultat
}
/*
*fonction pour afficher le vecteur lisiblement
*/
void afficher_vecteur(vecteur3D v,char*nom){
printf("%s=(%.2f,%.2f,%.2f)\n",nom,v.x,v.y,v.z);
}
/*
*fonction principale
*/
int main(){
    /* declaration et initialisation de deux vecteurs*/
    vecteur3D vecteur_u = {1,2,3,};
    vecteur3D vecteur_v = {4,5,6};
    /*affichage des vecteurs initiaux*/
    printf ("=== CALCUL DU PRODUIT VECTORIEL ===\n");
    afficher_vecteur(vecteur_u,"vecteur u");
    afficher_vecteur(vecteur_v,"vecteur v");
    /*calcul du produit vectoriel*/
    vecteur3D resultat= produit_vectoriel(vecteur_u,vecteur_v);
    /* affichage du resultat*/
    printf("\n--RESULTAT ---\n");
    afficher_vecteur(resultat,"u.v");
    return 0;

}
