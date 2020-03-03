#include<stdio.h>
#include<stdlib.h>
struct node{
    int data,pri;
    struct node *next;
};
struct node *start=NULL;
struct node *insert(struct node *start)
{
    int val,priority;
    struct node *ptr,*p;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value");
    scanf("%d",&val);
    ptr->data=val;
    printf("\n Enter the priority");
    scanf("%d",&priority);
    ptr->pri=priority;
    if(start==NULL ||priority<start->pri)
    {
        ptr->next=start;
        start=ptr;
    }
    else
    {
        p=start;
        while(p->next !=NULL &&p->next->pri <= priority)
            p=p->next;
        ptr->next=p->next;
        p->next=ptr;
    }
    return start;

}

struct node *delete(struct node *start)
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("\n Underflow");
        return;
    }
    else
    {
        ptr=start;
        printf("\n Deleted item is :%d",ptr->data);
        start=start->next;
        free(ptr);
    }
    return start;
}

void display(struct node *start)
{
    struct node *ptr;
    ptr=start;
    if(start==NULL)
        printf("\n empty queue");
    else
    {
            printf("\n the priority queue is :\n data\t priority");
            while(ptr!=NULL)
            {
                printf("\n%d\t%d",ptr->data,ptr->pri);
                ptr=ptr->next;
            }
    }

}

int main()
{
    int choice;
    while(1){
    printf("\n 1. insert ");
    printf("\n 2. delete ");
    printf("\n 3. display ");
    printf("\n\t4.EXIT\n");
    printf("\nEnter the Choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        start=insert(start);
        break;
        case 2:
        start=delete(start);
        break;
        case 3:
        display(start);
        break;
        case 4:
            exit(1);
    }}
    return 0;
}

