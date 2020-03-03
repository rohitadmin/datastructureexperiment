#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node list;
list *temp,*front=NULL,*rear=NULL,*run;
void insertqueue()
{
    int value;
    temp=(list*)malloc(sizeof(struct node));
    printf("Enter a value to be inserted\n");
    scanf("%d",&value);
    temp->data=value;
    temp->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        rear=temp;
        front=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void display()
{
    run=front;
    if(run==NULL)
    {
        printf("quesue is empty\n");
    }
    else{
        while(run!=rear)
        {
           printf("%d-->",run->data);
           run=run->next;
        }
        printf("%d-->",run->data);
    }

}
void deletequie()
{
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp=front;
        front=front->next;
        printf("\n%d",temp->data);
        free(temp);
    }
}

int main()
{
  int choice;
  while(1)
  {
      printf("\ninsert\n");
      printf("\ndelete\n");
      printf("\ndisplay\n");
      printf("\nexit\n");
      printf("\nEnter the Choice:\n");
    scanf("%d",&choice);
      switch(choice)
      {
      case 1:
        insertqueue();
        break;
        case 2:
        deletequie();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
        break;
      }
  }
}
