//Bubble sorting for lists
void bubble_sort_list(int order ,element *Head,int n)
{
  int nbcmp=0,nbperm=0;
  element *p=Head;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      p=Head;
      //Depending on the order(Ascending or Descending )
      // 1 for Ascending
      // 2 for Descending
      if(order == '1' )
      {
        if(strcmp((p->value),((p->next)->value))>0)
        {
        nbperm+=1;
        swap_list_values(p,p->next);
          nbcmp+=1;

        }
      }
      else{
        if(strcmp((p->value),((p->next)->value))<0)
        {
        nbperm+=1;
        swap_list_values(p,p->next);
          nbcmp+=1;
        }
      }
      p=p->next;
    }
  }
  printf("Number of comp : %d :\n",nbcmp);
  printf("Number of permutations : %d \n",nbperm);
  printf("------------------------------\n" );
}
