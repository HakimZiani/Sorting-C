#include<stdio.h>
#include<stdlib.h>
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

//Bubble sort algorithm for both orders
void Bubble_sort_vector(int order,int vector[],int n)
{
  int temp=0;
  for(int i=0;i<=n-1;i++)
  {
    for(int j=0;j<=n-i-1;j++)
    {
      //Depending on the order(Ascending or Descending )
      // 1 for Ascending
      // 2 for Descending
      if(order == 1 )
      {
        if(vector[j]>vector[j+1])
        {
          temp = vector[j];
          vector[j]=vector[j+1];
          vector[j+1]=temp;
        }
      }
      else{
        if(vector[j]<vector[j+1])
        {
          temp = vector[j];
          vector[j]=vector[j+1];
          vector[j+1]=temp;
        }
      }
    }
  }
}
//Insertion sort functino :
void insertion_sort_array(int order,int array[],int n)
{
  int alpha,j;
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
  }
}
//selection sort function
void swap(int *x,int *y)
{
  int temp=*x;
  *x = *y;
  *y = temp;
}
void selection_sort_array(int order,int array[],int n)
{
  int j,alpha;
  int *temp;
  for(int i=0;i<=n-1;i++)
  {
    alpha = i;
    if(order == 1)
    {
      for(int j=i+1;j<n;j++)
        {
        if(array[j]<array[alpha])
          {alpha=j;}
        }
    swap(&array[i],&array[alpha]);
    }
    else
    {
      for(int j=i+1;j<n-1;j++)
      {
        if(array[j]>array[alpha])
          {alpha=j;}

      }
      swap(&array[i],&array[alpha]);
    }
  }
}
//------------------------------------------------------------------
int main()
{
  int *array;
  int x;
  int type=0,algo=0,order=0;
  printf("Dear user, Please select the type of your structure : \n");
  printf("1- Vector\n");
  printf("2- Matrix\n");
  printf("3- List\n");
  scanf("%d",&type);
  system("cls || clear");

  printf("Please choose the sorting algorithm you want to use :\n" );
  printf("1- Bubble sort \n");
  printf("2- Selecetion sort \n");
  printf("3- Insertion sort \n");
  scanf("%d",&algo);
  system("cls || clear");

  printf("Please select the order of the sorting :\n" );
  printf("1- Ascending \n");
  printf("2- Descending \n");
  scanf("%d",&order);

  if (type==1)
  {
    //inputting the array

    printf("Enter number of intergers : ");
    scanf("%d",&x);
    array = input_array(x);
    printf(" Before :\n" );
    print_array(array,x);
    if(algo==1)
    {
      Bubble_sort_vector(order,array,x);
    }
    else if(algo==2)
    {
      selection_sort_array(order,array,x);
    }
    else if(algo ==3)
    {
      insertion_sort_array(order,array,x);
    }
  }
  else if(type==2)
  {
    /*Fonction 2 Matrix with algo and order  */
  }
  else if (type== 3)
  {
    /*fonction 3 witg algo and order */
  }
  printf(" After :\n" );
  print_array(array,x);

  return 0;
}
