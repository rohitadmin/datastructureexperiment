#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node list;
list *first,*last,*temp,*run;

void create()
{
    int x,max,i;
    printf("enter length of node\n");
    scanf("%d",&max);

    temp = (list*)malloc(sizeof(struct node));

    printf("Enter data for Node 1\n");
    scanf("%d",&x);

    temp->data=x;
    temp->next=NULL;
    first=temp;
    last=temp;

    for(i=1;i<max;i++)
    {
       printf("Enter data for Node %d\n",i+1);
    scanf("%d",&x);
     temp = (list*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
last->next=temp;
last=temp;
    }
}


void print_list()
{
    run=first;
    int i=1;
    while(run!=NULL)
    {
        printf("\tNode %d = %d",i,run->data);
        run=run->next;
        i++;
    }
}


int main()
{
    /*int choice;
    while(1)
    {
        printf("Menu\n");
        printf("Create\n");
        printf("Insert at End\n");
        printf("Delete at Beg\n");
        printf("Delete at end\n");
        printf("Traverse\n");
        printf("Exit\n");
        printf("Enter your Choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            create();
            break;
            case 3:
            exit(1);
        }
    }*/
create();
print_list();
free(first);free(last);free(temp);free(run);
return 0;
}
