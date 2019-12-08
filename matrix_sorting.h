
//sort matrix line per line
void matrix_sort_line(int **M,int n,int m,int algo,int order)
{
  if(algo==1)
  {
    //bubble sort
    for(int i=0;i<n;i++)
    {
      Bubble_sort_vector(order,M[i],m);
    }
  }
  else if (algo ==2)
  {
    //selection sort
    for(int i=0;i<n;i++)
    {
      selection_sort_array(order,M[i],m);
    }
  }
  else if (algo==3)
  {
      //insertion sort
      for(int i=0;i<n;i++)
      {
        insertion_sort_array(order,M[i],m);
      }
  }
}
// sort matrix all in one
void matrix_sort_all(int order,int algo,int array[],int x)
{
  if(algo ==1)
  {
    Bubble_sort_vector(order ,array,x);
  }
  else if (algo ==2)
  {
    selection_sort_array(order,array,x);
  }
  else
  {
    insertion_sort_array(order,array,x);
  }

}
void selection_sort_matrix(char **C,int order, int n,int m) 
{ 
    int beta;
    int nbcmp=0;
    int nbperm=0; 
   
    print_matrix_char(C,n,m); 
    for (int i = 0; i < n-1; i++) 
    {   beta=i;
      if(order==1)
      {
        for(int j=i+1;j<n;j++)
        {
          if(strcmp(C[i],C[j])>0)
          {
            beta=j;
            nbcmp++;
          }
        }
        swap_string(&C[i],&C[beta]);
        nbperm++; 
      }else{
        for(int j=i+1;j<n;j++)
        {
          if(strcmp(C[i],C[j])<0)
          {
            beta=j;
            nbcmp++;
          }
        }
       swap_string(&C[i],&C[beta]);
       nbperm++; 
      }  
         printf(" The #%d iteration : \n",i+1);
        print_matrix_char(C,n,m);
    } 
    printf("Number of comp : %d :\n",nbcmp);
printf("Number of permutations : %d \n",nbperm );
printf("------------------------------\n" );

}
void bubble_sort_matrix(char **C,int order,int n,int m)
{
  int temp=0;
  int nbcmp=0;
  int nbperm=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      //Depending on the order(Ascending or Descending )
      // 1 for Ascending
      // 2 for Descending
      if(order == 1 )
      {
        if(strcmp(C[j],C[j+1])>0)
        {nbcmp++;
        swap_string(&C[j],&C[j+1]);
          nbperm++;
        }
      }
      else{
        if(strcmp(C[j],C[j+1])<0)
        {
          swap_string(&C[j],&C[j+1]);
          nbperm+=1;
          nbcmp+=1;
        }
      }

    }
    printf(" The #%d iteration : \n",i+1);
    print_matrix_char(C,n,m);
  }
  printf("Number of comp : %d :\n",nbcmp);
  printf("Number of permutations : %d \n",nbperm );
  printf("------------------------------\n" );
} 

void insertion_sort_matrix(char **C,int order,int n,int m)
{ char *alpha;
  int j;
  int nbcmp=0;
  int nbperm=0;
  for(int i=1;i<=n-1;i++)
  {
    alpha = C[i];
    j=i-1;
    if(order==1)
    {
      while(j>=0 && (strcmp(C[j],alpha)>0))
      {
        C[j+1]=C[j];
        j--;

      }
      C[j+1]=alpha;
    }
    else
    {
      while(j>=0 && (strcmp(C[j],alpha)<0))
      {
        C[j+1]=C[j];
        j--;
      }
      C[j+1]=alpha;
    }
    printf(" The #%d iteration : \n",i);
    print_matrix_char(C,n,m);
    }
    printf("Number of comp : %d :\n",nbcmp);
    printf("Number of permutations : %d \n",nbperm );
    printf("------------------------------\n" );
  
}
void matrix_char_sort(char **C,int algo,int order,int n,int m)
{
  if(algo==1)
  {
    bubble_sort_matrix(C,order,n,m);
  }else if(algo==2)
  {
    selection_sort_matrix(C,order,n,m);
  }else{
    insertion_sort_matrix(C,order,n,m);
  }
  
}