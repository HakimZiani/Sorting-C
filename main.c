#include<stdio.h>
#include<stdlib.h>
//inputting Data part
int * input_array()
{
  int x;
  int *a;
  printf("Enter number of intergers : ");
  scanf("%d",&x );
  a=(int *)malloc(x*sizeof(int));
  return a;
}


//Bubble sort algorithm for both orders
void Bubble_sort_vector(int order,int vector[],int n)
{
  int temp=0;
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
//------------------------------------------------------------------
int main()
{
  int *array;

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
    array = input_array();
    if(algo =1)
    {
      Bubble_sort_vector(order,array,)
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
//----------------------------------------
//testing part
/*int *a;
int x;
a=(int *)malloc(6*sizeof(int));
for(int i=0;i<=5;i++)
{
  printf("Enter an integer :  " );
  scanf("%d",&x );
  a[i]=x;
}
  for(int i=0;i<=5;i++)
  {
  printf("%d | ",a[i]);
  }
  printf("\n" );

  Bubble_sort_vector(1,a,6);
  for(int i=0;i<=5;i++)
  {
  printf("%d | ",a[i]);
  }
*/


  return 0;
}
