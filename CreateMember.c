#include <stdio.h>

int CreateMember(int tmax,int tlogi,int t_ID[],int t_Activate[],int t_ActivePoint[],int t_UsedPoint[],int t_Categorie[],int t_MultiplceAccess[])
  {
  char Categ;
  printf("Merci de renseignez la catégoie sociale du client (R : retraité; A : actif; E : Etudiant)");
  scanf("%c",Categ);
  t_ID[tlogi]=t_ID[tlogi-1]+1;
  t_Activate[tlogi]=1;
  t_ActivePoint[tlogi]=0;
  t_UsedPoint[tlogi]=0;
  t_Categorie[tlogi]=Categ;
  t_MultipleAccess[tlogi]=1;
  return tlogi+1;
  }
