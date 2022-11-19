#include "reclamation.h"
#include <stdio.h>


int ajouter (char*filename, reclamation R )
{
    FILE * f=fopen(rec, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s \n",R.id,R.t,R.v);
        
        fclose(f);
        return 1;
    }
    else return 0;


}

int modifier( char*filename, int id, reclamation nouv )
{
    int tr=0;
    reclamation R;
    FILE * f=fopen(rec, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d  \n",&R.id,R.t,R.v)!=EOF)
        {
            if(R.id== id)
            {
                fprintf(f2, " %d \n",nouv.id,nouv.t,nouv.v);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s \n",R.id,R.t,R.v);

        }
    }
    fclose(f);
    fclose(f2);
    remove(rec);
    rename("nouv.txt", rec);
    return tr;

}
int supprimer(char*filename, int id , reclamation R)
{
    int tr=0;
    FILE * f=fopen(rec, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s \n",&R.id,R.t,R.v)!=EOF)
        {
            if(R.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %s \n",R.id,R.t,R.v);
        }
    }
    fclose(f);
    fclose(f2);
    remove(rec);
    rename("nouv.txt", rec);
    return tr;
}
reclamation afficher(char*filename , int id)
{
    reclamation R;
    int tr;
    FILE * f=fopen(reclamation, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s \n",&R.id,R.t,R.v)!=EOF)
        {
            if(R.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        R.id=-1;
    return R;
       

}
