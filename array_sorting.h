//Bubble sort algorithm for both orders
void Bubble_sort_vector(char order,int vector[],int n)
{
  int nbcmp=0;
  int nbperm=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      //Depending on the order(Ascending or Descending )
      // 1 for Ascending
      // 2 for Descending
      if(order == '1' )
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
    if (nbperm==0)
      break;
    printf(" The #%d iteration : \n",i+1);
    print_array(vector,n);
  }
  printf("Number of comp : %d :\n",nbcmp);
  printf("Number of permutations : %d \n",nbperm);
   printf("----------------------------------\n" );
}
//Insertion sort functino :
//-------------------------

void insertion_sort_array(char order,int array[],int n)
{
  int alpha,j;
  int nbcmp=0;
  int nbperm=0;
  for(int i=1;i<=n-1;i++)
  {
    alpha = array[i];
    j=i-1;
    if(order=='1')
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
     printf("----------------------------------\n" );

}
//selection sort function
//-----------------------
void selection_sort_array(char order,int array[],int n)
{
  int j,alpha;
  int nbcmp=0;
  int nbperm=0;
  for(int i=0;i<n-1;i++)
  {
    alpha = i;
    if(order == '1')
    {
      for(int j=i+1;j<=n-1;j++)
        {
        if(array[j]<array[alpha])
          {alpha=j;}
          nbcmp+=1;

        }
      if(alpha!=i){
        swap(&array[i],&array[alpha]);
        nbperm++;}
    }
    else
    {
      for(int j=i+1;j<=n-1;j++)
      {
        if(array[j]>array[alpha])
          {alpha=j;}
          nbcmp+=1;


      }
     if(alpha!=i){
        swap(&array[i],&array[alpha]);
        nbperm++;}

    }
    if (nbperm==0)
    break;
    printf(" The #%d iteration : \n",i+1);
    print_array(array,n);
  }
printf("Number of comp : %d :\n",nbcmp);
printf("Number of permutations : %d \n",nbperm );
 printf("----------------------------------\n" );
}
// Additional sorting algorithm
// Shaker sort
void shaker_sort_array(char order,int array[],int n)
{
  int nbperm=0,nbcomp=0;
  for(int i=0 ;i<n-1;i++)
  {
    for(int j=i;j<n-1-i;j++)
    {
      if(order=='1')
      {
       if(array[j]>array[j+1])
        {
        swap(&array[j],&array[j+1]);
        nbcomp++;
        nbperm++;
        }
      }else{
        if(array[j]<array[j+1])
         {
           nbcomp++;
           nbperm++;
         swap(&array[j],&array[j+1]);
      }}
    }
    for(int l=n-1-i;l>i;l--)
    {
      if(order =='1' )
      {
      if(array[l]<array[l-1])
      {nbcomp++;
      nbperm++;
        swap(&array[l],&array[l-1]);
      }}
      else{
        if(array[l]>array[l-1])
        {
          nbcomp++;
          nbperm++;
          swap(&array[l],&array[l-1]);
        }
      }
       printf(" The #%d iteration : \n",i+1);
       print_array(array,n);

    }
  }
  printf("Number of permutations : %d \n",nbperm );
  printf("Number of comparisons  : %d\n",nbcomp );
  printf("----------------------------------\n" );

}