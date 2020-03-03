#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node list;
list *first,*last,*temp,*run;
//static int LIST_SIZE=0;
void create()
{
  int max,x,i,z;
  printf("enter a length of node\n");
  scanf("%d",&max);
 // LIST_SIZE=max;
  temp = (list*)malloc(sizeof(struct node));
  printf("enter the data in node 1\n");
  scanf("%d",&x);

   temp->data=x;
   temp->next=temp;
   first=temp;
   last=temp;

   for(i=1;i<max;i++)
   {
       printf("Enter %d node data\n",i+1);
       scanf("%d",&z);

       temp = (list*)malloc(sizeof(struct node));

       temp->data=z;
       temp->next=first;
       last->next=temp;
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
    run=first;
    while(run->next!=first)
    {
     run= run->next;
   }
    run->next=temp;
    temp->next=first;
    first=temp;
    //LIST_SIZE++;

}

void insert_mid()
{
    int k,pos,count=1;
    temp = (list*)malloc(sizeof(struct node));

     printf("\nEnter the position for the new node to be inserted\n");
     scanf("%d",&pos);
     printf("\nEnter the data value of the node at position %d\n",pos);
     scanf("%d",&k);
     temp->data = k;


      run=first;
      while(count<pos-1)
      {
          run=run->next;
          count++;
      }
      temp->next = run->next;
      run->next = temp;
     // LIST_SIZE++;


}

void insert_end()
{
    int p;
    temp = (list*)malloc(sizeof(struct node));
    printf("Enter Ending node data\n");
    scanf("%d",&p);

    temp->data=p;
    run=first;
    while(run->next!=first)
    {
        run = run->next;
    }
    run->next=temp;
    run=temp;
    temp->next=first;
    //LIST_SIZE++;
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
        last->next=first;
        free(temp);
      //  LIST_SIZE--;
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
        free(temp);
        last=run;
        run->next=first;
        //LIST_SIZE--;

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


              // else{
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
                        //LIST_SIZE--;
              // }
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
    while(run->next!=first)
    {
        printf("\tList Node %d = %d\n",i,run->data);
        run=run->next;
        i++;
    }
        printf("\tList Node %d = %d\n",i,run->data);
    }

   // free(run);
}


int main()
{
    int choice;
    while(1)
    {
        printf("\nCircular Link List Menu\n");
        printf("Create\n");
        printf("Insert at Begining\n");
        printf("Insert at Mid\n");
        printf("Insert at End\n");
        printf("Delete at Beg\n");
        printf("Delete at end\n");
        printf("Delete at position\n");
        printf("Traverse\n");
        printf("Exit\n");
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
