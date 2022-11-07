void ShowOneMember(int ID, int tlogi,int t_ID[],int t_Activate[],int t_ActivePoint[],int t_UsedPoint[],int t_Categorie[],int t_MultiplceAcess[])
{
  int i;
  for(i=0;i<=tlogi;++i) 
  {
    if (t_ID[i]==ID)
    {
      
      printf("%d  %d  %d  %c  %d",t_ID[i],t_Activate[i],t_ActivePoint[i],t_UsedPoint[i],t_Categorie[i],t_MultiplceAcess[i]);
      return 0;
    }
  }  
  fprintf("stderr","ID non trouvé");
  return -1;
}
