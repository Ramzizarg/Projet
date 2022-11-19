#ifndef RECLAMATION_H_INCLUDED
#define  RECLAMATION_H_INCLUDED
#include <stdio.h>

typedef struct
{
     int id;
     char type [20];
     char vers [20];
     
}reclamation;
       
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, reclamation);
int modifier( char *, int, reclamation);
int supprimer(char *, int, reclamation);
reclamation afficher(char *, int);
#endif // RECLAMATION_H_INCLUDED
