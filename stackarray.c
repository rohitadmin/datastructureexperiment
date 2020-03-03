#include<stdio.h>

int stack[],size,x,i;
void push(void);
void pop(void);
void display(void);
int top=-1;
int main()
{
    int choice;
    printf("Enter the size of STACK:\n");
    scanf("%d",&size);
      while(1)
    {
    printf("\n\t STACK OPERATIONS USING ARRAY");
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
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(1);
        }
    }
   // while(choice!=4);
    return 0;
}
void push()
{
    if(top>=size-1)
    {
        printf("STACK IS OVERFLOW\n");
    }
    else
    {
        printf("Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nSTACK IS UNDERFLOW\n");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\nPress Next Choice\n");
    }
    else
    {
        printf("The STACK is empty\n");
    }

}
