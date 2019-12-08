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


