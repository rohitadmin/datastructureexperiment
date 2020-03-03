#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node list;
list *first=NULL,*last=NULL,*temp,*run;
static int LIST_SIZE=0;
void create()
{
  int max,x,i,z;
  printf("enter a length of link list to be created\n");
  scanf("%d",&max);
  LIST_SIZE=max;
  temp = (list*)malloc(sizeof(struct node));
  printf("enter the data in node 1\n");
  scanf("%d",&x);

   temp->prev=NULL;
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
       temp->prev=last;
       last->prev=first;
       last->next=temp;
       temp->next=NULL;
       last=temp;
   }
}

void insert_beg()
{
    int y;
    temp = (list*)malloc(sizeof(struct node));
    printf("Enter begining node data\n");
    scanf("%d",&y);

    temp->data=y;
    temp->next=first;
    first->prev=temp;
    first=temp;
    temp->prev=NULL;
    LIST_SIZE++;

}

void insert_mid()
{
    int k,pos,count=1;
    temp = (list*)malloc(sizeof(struct node));
    if(first==NULL)
        {
                printf("\nheap is out of Memory Space:\n");
                return;
        }
     printf("\nEnter the position for the new node to be inserted\n");
     scanf("%d",&pos);
     printf("\nEnter the data value of the node at position %d\n",pos);
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
         insert_beg();
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
      run->next->prev = temp;
      run->next=temp;
      temp->prev = run;
      //run->next = temp;
      run->prev = temp;
      LIST_SIZE++;
    }

}

void insert_end()
{
    int p;
    temp = (list*)malloc(sizeof(struct node));
    printf("Enter Ending node data\n");
    scanf("%d",&p);

    temp->data=p;
    last->next=temp;
    temp->prev=last;
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
        first->prev=NULL;
        temp->next=NULL;
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
                printf("\nEnter the position of the node to be deleted\n");
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
                    delete_beg();
                }
               else{
                run=first;
                while(count<pos-1)
                {
                    //temp=run;
                    run=run->next ;
                    count++;
                }
                        //temp = run->next;
                        //temp->prev = run;
                        temp=run->next;
                        run->next=temp->next;
                        temp->next->prev=run;
                        free(temp);
                        LIST_SIZE--;
               }
        }
}

void deleteminmax(int pos)
{
if(first==NULL){printf("\nThe list is empty !!"); return;}
  else{
    if(pos>LIST_SIZE){printf("\nIndex out of bound!!"); return;}
  else if(pos==1)delete_beg();
  else if(pos==LIST_SIZE) delete_end();
  else{printf("\nThe list as of now is::");
print_list();
    int i=1;run=first;
    while(i<pos-1)
    {
            run=run->next;
        i++;
    }

    temp=run->next;

    run->next=temp->next;
    temp->next->prev=run;
    free(temp);

LIST_SIZE--;
printf("\nThe amended list now is::");
    print_list();
  }


  }
}

void delete_max()
{

  if(first==NULL)
    {
        printf("\nList empty!!");
        return;
    }
    else
    {
        int max_pos=1;
        int count=1;
        run=first;
        int max=run->data;
       while(run!=NULL)
       {
           if(run->data > max){
            max = run->data;
            max_pos=count;
        }
         count++;
        run = run->next;
       }
       deleteminmax(max_pos);
    }
}

void delete_min()
{

  if(first==NULL)
    {
        printf("\nList empty!!");
        return;
    }
    else
    {
        int min_pos=1;
        int count=1;
        run=first;
        int min=run->data;
       while(run!=NULL)
       {
           if(run->data < min){
            min = run->data;
            min_pos=count;
        }
         count++;
        run = run->next;
       }
       deleteminmax(min_pos);
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
        printf(" <-- [%d] -->",run->data);
        run=run->next;
    }
     printf(" NULL");
       // printf("\tList Node %d = %d\n",i,run->data);
    }

    free(run);
}

int main()
{
   /* int choice;
    while(1)
    {
        printf("\nDoubly Link List Menu\n");
        printf("1.\tCreate\n");
        printf("2.\tInsert at Begining\n");
        printf("3.\tInsert at Mid\n");
        printf("4.\tInsert at End\n");
        printf("5.\tDelete at Beg\n");
        printf("6.\tDelete at end\n");
        printf("7.\tDelete at position\n");
        printf("8.\tTraverse\n");
        printf("9.\tDelete max element\n");
        printf("10.\tDelete minimum element\n");
        printf("11.\tExit\n");

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
            delete_max();
            break;
            case 10:
            delete_min();
            break;
            case 11:
            exit(1);
        }
    }  */
    create();
    insert_end();
    insert_mid();
    insert_beg();
    delete_beg();
    delete_end();
    delete_pos();
    print_list();
    print_list();
    delete_max();
    delete_min();
    return 0;
}


