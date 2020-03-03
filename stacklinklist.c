
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node list;
list *top,*newval,*temp;

void stack_push();
void stack_pop();
void display();

void stack_push()
{
    int val;
    newval = (list*)malloc(sizeof(struct node));
    if(newval == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the element in the list\n");
        scanf("%d",&val);
        if(top==NULL)
        {
            newval->data = val;
            newval -> next = NULL;
            top=newval;
            display();
        }
        else
        {
            newval->data = val;
            newval->next = top;
            top=newval;
            display();
        }
        printf("Item pushed");

    }
}

stack_pop()
{
    if (top == NULL)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        temp = top;
        //temp = top->data;
        printf("Item popped %d\n",top->data);
        top = temp->next;
        //temp->next=NULL;
        free(temp);

    }
}


display()
{
    int i;
    if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {

        printf("Printing Stack elements \n");
        temp=top;
        while(temp!=NULL)
        {
            printf("the element in the list | %d | %d\n",temp->data,temp->next);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;
      while(1)
    {
    printf("\n\t STACK OPERATIONS USING LINKED LIST");
    printf("\n\t--------------------------------");
    printf("\n\t1.PUSH");
    printf("\n\t2.POP");
    printf("\n\t3.DISPLAY");
    printf("\n\t4.EXIT\n");
    printf("\nEnter the Choice:\n");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            stack_push();
            break;

            case 2:
            stack_pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(1);
        }
    }

    return 0;
}
