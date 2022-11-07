#include <stdio.h>

int ActivateOrNotCard(int ID,int tlogi,int t_ID[],int t_Activate[])
  {
  char EntryUser=Z;
  while (EntryUser!=D || EntryUser!=A)
    {
    printf("Merci de renseignez la volonté de désactiver (D) ou d'activer (A) la carte");
    scanf("%c",EntryUser); 
    }
  int i;
  for(i=0;t_ID[i]!=ID||(i+1)<=tlogi;++i);
  if (i+1==tlogi)
  {
    fprintf("stderr","L'ID renseigné n'est pas renseigné dans la base de donnée.")
    return -1;
  }
  if (EntryUser==A) t_Activate[i]=1;
  else t_Activate[i]=0;
  printf("Le changement a été effectué sans problème \n");
  return 0
  }
