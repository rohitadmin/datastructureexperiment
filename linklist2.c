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
  printf("enter a length of node:\t");
  scanf("%d",&max);
  LIST_SIZE=max;
  temp = (list*)malloc(sizeof(struct node));
  printf("enter the data in node 1:\t");
  scanf("%d",&x);

   temp->data=x;
   temp->next=NULL;
   first=temp;
   last=temp;

   for(i=1;i<max;i++)
   {
       printf("Enter %d node data:\t",i+1);
       scanf("%d",&z);

       temp = (list*)malloc(sizeof(struct node));

       temp->data=z;
       temp->next=NULL;
       last->next=temp;
       last=temp;
   }
}

void insert_beg()
{
    int y;
    temp = (list*)malloc(sizeof(struct node));
    printf("Enter begining node data: \t");
    scanf("%d",&y);

    temp->data=y;
    temp->next=first;
    first=temp;
    LIST_SIZE++;

}

void insert_mid()
{
    int k,pos,count=1;
    temp = (list*)malloc(sizeof(struct node));
    if(first==NULL)
        {
                printf("\nheap is out of Memory Space:\t");
                return;
        }
     printf("\nEnter the position for the new node to be inserted: \t");
     scanf("%d",&pos);
     printf("\nEnter the data value of the node at position %d: \t",pos);
     scanf("%d",&k);
     temp->data = k;

     if(pos>LIST_SIZE)
     {
      printf("\nIndex out of bound!!");
      return;
     }

     else if(pos==LIST_SIZE)
     {
         insert_end();
     }

     else if(pos==1)
     {
         temp->next=first;
         first=temp;
     }
     else
    {
      run=first;
      while(count<pos-1)
      {
          run=run->next;
          count++;
      }
      temp->next = run->next;
      run->next = temp;
      LIST_SIZE++;
    }

}

void insert_end()
{
    int p;
    temp = (list*)malloc(sizeof(struct node));
    printf("Enter Ending node data:\t");
    scanf("%d",&p);

    temp->data=p;
    last->next=temp;
    last=temp;
    temp->next=NULL;
    LIST_SIZE++;
}

void delete_beg()
{
    if(first==NULL)
    {
        printf("List Data Does Not Exit");
    }
    else
        {
        temp=first;
        first=first->next;
        free(temp);
        LIST_SIZE--;
    }

}

void delete_end()
{
    if(first==NULL)
    {
        printf("List Data Does Not Exit");
    }
    else
        {
        run=first;
        while(run->next!=last)
        {
           run=run->next;
        }

        temp=last;
        last=run;
        run->next=NULL;
        free(temp);
        LIST_SIZE--;

    }

}

void delete_pos()
{
int count=1,pos;

        if(first==NULL)
        {
                printf("\nThe List is Empty:\n");
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);

                if(pos>LIST_SIZE)
                {
                printf("\nIndex out of bound!!");
                return;
                }
                else if(pos==LIST_SIZE)
                {
                    delete_end();
                }
                else if(pos==1)
                {
                        temp=first;
                        first=first->next;
                        free(temp);
                }
               else{
                run=first;
                while(count<pos-1)
                {
                    //temp=run;
                    run=run->next ;
                    count++;
                }
                        temp =run->next;
                        run->next=temp->next;
                        free(temp);
                        LIST_SIZE--;
               }
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
    while(run!=NULL)
    {
        printf("[%d] -->",run->data);
        run=run->next;
    }
    printf( "NULL");
    }
    free(run);
}


int main()
{
    int choice;
    while(1)
    {
        printf("\nSingle Link list Menu\n");
        printf("1.Create\n");
        printf("2.Insert at Begining\n");
        printf("3.Insert at Mid\n");
        printf("4.Insert at End\n");
        printf("5.Delete at Beg\n");
        printf("6.Delete at end\n");
        printf("7.Delete at position\n");
        printf("8.Traverse\n");
        printf("9.Exit\n");
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            create();
            break;
            case 2:
            insert_beg();
            break;
            case 3:
            insert_mid();
            break;
            case 4:
            insert_end();
            break;
            case 5:
            delete_beg();
            break;
            case 6:
            delete_end();
            break;
            case 7:
            delete_pos();
            break;
            case 8:
            print_list();
            break;
            case 9:
            exit(1);
        }
    }

    return 0;
}
