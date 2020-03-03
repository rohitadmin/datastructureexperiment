
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node list;
list *first,*last,*temp,*run;

static int LIST_SIZE=0;

void create()
{
  int max,x,i,z;
  printf("enter a length of node\n");
  scanf("%d",&max);
  LIST_SIZE=max;
  temp = (list*)malloc(sizeof(struct node));
  printf("enter the data in node 1\n");
  scanf("%d",&x);

   temp->data=x;
   temp->next=NULL;
   first=temp;
   last=temp;

   for(i=1;i<max;i++)
   {
       printf("Enter %d node data\n",i+1);
       scanf("%d",&z);

       temp = (list*)malloc(sizeof(struct node));

       temp->data=z;
       temp->next=NULL;
       last->next=temp;
       last=temp;
   }
}

void print_list()
{
    if(first==NULL)
    {
        printf("\nList empty!!");
        return;
    }
    else
    {
    run=first;
    int i=1;
    while(run!=NULL)
    {
        printf("%d-->",run->data);
        run=run->next;
        i++;
    }
    }
    free(run);
}

void reverse_printlist(list* link){

if(link == NULL)
{
    return;
}
   printf("\n");
   reverse_printlist(link->next);

   printf("%d-->", link->data);

}

int main()
{
    create();
    print_list();
    reverse_printlist(first);
    printf("\n");
    return 0;
}

