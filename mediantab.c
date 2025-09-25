#include<stdio.h>
#include<stdlib.h>
struct tableau{
    int *elements;
    int taille;
};
void echanger( int *a, int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
}
void triertableau(struct tableau *tab[]){
    int taille, i,j,min_index;
    for (i=0;i< tab[taille-1];i++){
        min_index=i;
        for (j=i+1;j<tab[taille-1];j++)
    {
        if(tab[j]< tab[min_index]){
            min_index = j;
        }
    }
    echanger(&tab[min_index],&tab[i]);
    }
}
float calculerMediane(struct Tableau *tab[]){
    trierTableau(tab);
    }
    void affichertableau(struct Tableau *tab[]){
        int taille,i;
        printf("tableau :");
        for (int i=0;i<tab[taille];i++);{
        printf("%d",tab[i]);
        if (i<tab[taille-1]){
            printf(",");
        }
     }
print();
    }
    int main(){
        struct Tableau 'montableau';
        int donnees[]= {3,1,4,1,5,9,2};
        monTableau.taille=7;

        monTableau.elements = (int*)malloc(monTableau.taille * sizeof(int));
        for (int i=0;i< monTableau.taille;i++){
            montableau.elements[i] = donnees[i];
        }
printf("")

    }

