#include "tp_note_2023.h"   

Liste liste_nouv(){  
    
}

void split_block(Liste l){ 
    
}

void insert_in_block(Liste l, int x){ 
    
}

Liste ajout_element(Liste l, int x){
    
}

int min_liste (Liste l){ 
    
}

int max_liste(Liste l){ 

}

Nat longueur(Liste l){ 
    
}

int indice_in_tab(Liste l, int n){

}

bool recherche(Liste l, int n){ 
    
}

Liste free_block(Liste l){

}

void free_liste(Liste l){
   
}


// ----------------------------- Fonctions csv et affichage : Déja fait ----------------------------------------


void print_liste(Liste l){
    int n=0;
    while (l!=NULL){

        printf("Boite n°%d, min:%d, max:%d, taille:%d\n",n, l->min, l->max,l->taille);
        for(int i = 0; i<l->taille;i++){
            printf("%d ",l->tab[i]);
        }
        printf("\n \n");
        l = l->s;
        n++;
    }
    printf("\n \n");
}

Liste readCSVToListe(const char *filename) {
    Liste l = liste_nouv();
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int v;
    while (fscanf(file, "%d,", &v) == 1){
        l = ajout_element(l,v);
    }

    fclose(file);

    return l;
}
