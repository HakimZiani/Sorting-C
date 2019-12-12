//imputting Data part
//inputting list
typedef struct element
{
  char value[45]; //as the biggest word in english is formed by 45 letters
  struct element *next;
} element;
element  *create_list(int n)
{
  char word[45];
  element *Head,*p,*q;
  printf("Enter the #1 value : ");
  scanf("%s",word);
  Head=(element *)malloc(sizeof(element *));
  strcpy(Head->value,word);
  Head->next =NULL;
  q=Head;
  for(int i=2;i<=n;i++)
  {
    p=(element *)malloc(sizeof(element *));
    printf("Enter the #%d value : ",i);
    scanf("%s",word);
    strcpy(p->value,word);
    p->next = NULL;
    q->next = p;
    q=p;
  }
  return Head;
}
void print_list(element *Head)
{
  int k=0;
  element *p=Head;
  while(p!=NULL)
  {
    printf("The %d word : %s\n",k,p->value );
  }
}
void swap_list_values(element *p,element *q)
{
  char temp[45];
  strcpy(temp,p->value);
  strcpy(p->value,q->value);
  strcpy(q->value,temp);

}
