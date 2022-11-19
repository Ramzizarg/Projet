#include <stdio.h>
#include <stdlib.h>
#include"reclamation.h"
int main()
{

    reclamation R1= {10583567}, R;

    int x=ajouter("reclamation.txt", R1);
   
    if(x==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\n echec ajout");
    
       
 x=modifier("reclamation.txt",1,R1 );
    if(x==1)
        printf("\n Modification de point avec succés");
    else printf("\n echec Modification");
    
    
 x=supprimer("reclamation.txt",1,R1 );
    if(x==1)
        printf("\n Suppression de point avec succés");
    else printf("\n echec Suppression");
    
    
 R=afficher("reclamation.txt",1 );
    if(x==1)
        printf("\n reclamation est:");      
        else printf("\n aucun reclamation");
    return 0;
 }
