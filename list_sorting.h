//Bubble sorting for lists
void bubble_sort_list(char order ,element *Head,int n)
{
  int nbcmp=0,nbperm=0;
  element *p=Head,*q=NULL;int i=1;
  do{
     p=Head;
     while(p->next!=q)
     {if(order=='1'){
       if(strcmp(p->value,(p->next)->value)>0)
       {
        nbcmp++;nbperm++;
        swap_list_values(p,p->next);
       }}
      else{
        if(strcmp(p->value,(p->next)->value)<0)
        {
          nbcmp++;nbperm++;
          swap_list_values(p,p->next);
        }
      }p=p->next;
       printf(" The #%d iteration : \n",i);i++;
       print_list(Head);
     }q=p;
  }while(q!=Head);
  printf("Number of comp : %d :\n",nbcmp);
  printf("Number of permutations : %d \n",nbperm);
   printf("----------------------------------\n" );
}
void selection_sort_list(char order ,element *Head,int n)
{
  int nbcmp=0,nbperm=0,i=1;
  element *p,*q,*minmax;
  p=Head;
  while(p!=NULL)
  { minmax=p;
    q=p->next;
    while(q!=NULL)
    { if(order=='1')
      {if(strcmp(minmax->value,q->value)>0)
        {minmax=q;nbcmp++;}
      }
      else{if(strcmp(minmax->value,q->value)<0)
        {minmax=q;nbcmp++;}

      }q=q->next;
    }
    if(minmax!=p)
      {swap_list_values(p,minmax);nbperm++;}
    p=p->next;
    if(nbperm==0)
      break;
     printf(" The #%d iteration : \n",i);i++;
     print_list(Head);
  } 
  printf("Number of comp : %d :\n",nbcmp);
  printf("Number of permutations : %d \n",nbperm);
   printf("----------------------------------\n" );
}