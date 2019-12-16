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
char **input_matrix_char(int n,int m)
{
  char **C;
  C=(char **)malloc(n*sizeof(char *));
  for(int i=0;i<n;i++)
  {  C[i]=(char *)malloc(m*sizeof(char));}
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      printf("enter the %d character of the %d word\n",j+1,i+1);
      scanf("%s",&C[i][j]);
    }

  }return C;
}
void print_matrix_char(char **C,int n,int m)
{
  for (int i=0;i<n;i++)
  {
    for(int j=0;j<m;++j)
    {
      printf("'%c' ",C[i][j]);
    }
    printf("\n");
  }printf("______________________________\n");
}

void swap_string(char **x,char **y)
{
  char *temp;
  temp=*x;*x=*y;*y=temp;
}