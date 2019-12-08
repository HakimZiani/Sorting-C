#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"array_functions.h"
#include"array_sorting.h"
#include"matrix_functions.h"
#include"matrix_sorting.h"
//------------------------------------------------------------------
int main()
{
  int *array;
  int x=-1;
  int type=0,algo=0,order=0;
  int n=0,m=0;
  int **M;
  int al,matrix_type;
  char **C;
  do{
  printf("Dear user, Please select the type of your structure : \n");
  printf("1- Vector\n");
  printf("2- Matrix\n");
  printf("3- List\n");
  scanf("%d",&type);
  system("cls || clear");}while(type!=1 && type!=2 && type!=3);
  do{
  printf("Please choose the sorting algorithm you want to use :\n" );
  printf("1- Bubble sort \n");
  printf("2- Selecetion sort \n");
  printf("3- Insertion sort \n");
  scanf("%d",&algo);
  system("cls || clear");}while(algo!=1 && algo!=2 && algo!=3);
  do{
  printf("Please select the order of the sorting :\n" );
  printf("1- Ascending \n");
  printf("2- Descending \n");
  scanf("%d",&order);}while(order!=1 && order!=2);

  if (type==1)
  {
    //inputting the array
    do
    {printf("Enter number of intergers : ");
    scanf("%d",&x);}while(x>=1000 || x<0);
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
    printf(" After :\n" );
    print_array(array,x);
  }
  else if(type==2)
  {do{  
    printf("what type of matrix do you wanna sort \n");
     printf("1- integers matrix\n");
     printf("2- characters matrix\n");
     scanf("%d",&matrix_type);}while(matrix_type!=1 && matrix_type!=2);
    /*Fonction 2 Matrix with algo and order  */
    printf("Enter dimension of matrix :  " );
    scanf("%d %d",&n,&m );
    if(matrix_type==1)
    { 
    M=input_matrix(n,m);
    do{
    printf("Do you want to sort it line per line or all in one? :\n ");
    printf("1- Line per line.\n" );
    printf("2- All in one.\n");
    scanf("%d",&al );}while(al!=1 && al!=2);
    printf("Before:\n");
    print_matrix(M,n,m);
    if (al ==1)
    {
    matrix_sort_line(M,n,m,algo,order);
  }else
  {
    array=matrix_transform(M,n,m);
    matrix_sort_all(order,algo,array,n*m);
    M=matrix_undo(array,n,m);
  }
    print_matrix(M,n,m);
  }
  else{
  C=input_matrix_char(n,m);
  printf("Before:\n");
  print_matrix_char(C,n,m);
  matrix_char_sort(C,algo,order,n,m);
  printf("after:\n");
  print_matrix_char(C,n,m);


  }}

  else if (type== 3)
  {
    /*fonction 3 with algo and order */
  }

return 0;
  
}