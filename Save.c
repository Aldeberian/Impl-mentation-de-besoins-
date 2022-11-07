int Save(int tlogi,int t_ID[],int t_Activate[],int t_ActivePoint[],int t_UsedPoint[],int t_Categorie[],int t_MultiplceAcess[])
{
  int i;
  FILE *f;
  f=fopen("fichier.txt");
  for(i=0;i<tlogi;++i) fscanf(f,"%d %d %d %d %c %d",t_ID[i],t_Activate[i],t_ActivePoint[i],t_UsedPoint[i],t_Categorie[i],t_MultiplceAcess[i]);
  printf("Sauvegarde effectué sans erreur");
  return 0;
}
