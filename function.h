//inputting Data part
int *input_array(int x)
{
  int *a;
  int l;
  a=(int *)malloc(x*sizeof(int));
  for(int i=0;i<=x-1;i++)
  {
    printf("Enter #%d integer : ",i+1 );
    scanf("%d",&l );
    a[i]=l;
  }
  return a;
}
//Printing Data
void print_array(int a[],int x)
{
  for (int i=0;i<=x-1;i++)
  {
    printf("  #%d value : %d\n",i+1,a[i]);
  }
  printf("__________________________________\n");

}

void swap(int *x,int *y)
{
  int temp=*x;
  *x = *y;
  *y = temp;
}

int **input_matrix(int n,int m)
{
  int **A;
  A=(int **)malloc(n* sizeof(int *));
  for (int i=0;i<n;i++)
  {
    A[i]=(int *)malloc(m*sizeof(int));
  }
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<=m-1;j++)
    {
      printf("Enter the (%d,%d) element : ",i,j);
      scanf("%d",&A[i][j]);
    }
  }
  return A;
}
void print_matrix(int **M,int n,int m)
{
  for (int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      printf("%d  ",M[i][j] );
    }
    printf("\n" );
  }

}
int *matrix_transform(int **M,int n, int m)
{
  int *A;
  int k=0;
  A=(int *)malloc((n*m)*sizeof(int));
  for (int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      A[k]=M[i][j];
      k++;
    }
  }
  return A;
}
int **matrix_undo(int array[],int n, int m)
{
  int x=0;
  int **M;
  M=(int **)malloc(n* sizeof(int *));
  for (int i=0;i<n;i++)
  {
    M[i]=(int *)malloc(m*sizeof(int));
  }
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<=m-1;j++)
    {
    M[i][j]=array[x];
    x++;
    }
  }
  return M;
}