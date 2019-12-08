//Bubble sort algorithm for both orders
void Bubble_sort_vector(int order,int vector[],int n)
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
        if(vector[j]>vector[j+1])
        {
        nbperm+=1;
        swap(&vector[j],&vector[j+1]);
          nbcmp+=1;
        }
      }
      else{
        if(vector[j]<vector[j+1])
        {
          swap(&vector[j],&vector[j+1]);
          nbperm+=1;
          nbcmp+=1;
        }
      }

    }
    printf(" The #%d iteration : \n",i+1);
    print_array(vector,n);
  }
  printf("Number of comp : %d :\n",nbcmp);
  printf("------------------------------\n" );
}
//Insertion sort functino :
//-------------------------

void insertion_sort_array(int order,int array[],int n)
{
  int alpha,j;
  int nbcmp=0;
  int nbperm=0;
  for(int i=1;i<=n-1;i++)
  {
    alpha = array[i];
    j=i-1;
    if(order==1)
    {
      while(j>=0 && array[j]>alpha)
      {
        array[j+1]=array[j];
        j--;

      }
      array[j+1]=alpha;
    }
    else
    {
      while(j>=0 && array[j]<alpha)
      {
        array[j+1]=array[j];
        j--;
      }
      array[j+1]=alpha;
    }
    printf(" The #%d iteration : \n",i);
    print_array(array,n);
    }
    printf("Number of comp : %d :\n",nbcmp);
    printf("Number of permutations : %d \n",nbperm );
    printf("------------------------------\n" );

}
//selection sort function
//-----------------------
void selection_sort_array(int order,int array[],int n)
{
  int j,alpha;
  int nbcmp=0;
  int nbperm=0;
  for(int i=0;i<n-1;i++)
  {
    alpha = i;
    if(order == 1)
    {
      for(int j=i+1;j<=n-1;j++)
        {
        if(array[j]<array[alpha])
          {alpha=j;}
          nbcmp+=1;

        }
    swap(&array[i],&array[alpha]);
    nbperm++;
    }
    else
    {
      for(int j=i+1;j<=n-1;j++)
      {
        if(array[j]>array[alpha])
          {alpha=j;}
          nbcmp+=1;


      }
      swap(&array[i],&array[alpha]);
      nbperm+=1;

    }
    printf(" The #%d iteration : \n",i+1);
    print_array(array,n);
  }
printf("Number of comp : %d :\n",nbcmp);
printf("Number of permutations : %d \n",nbperm );
printf("------------------------------\n" );
}