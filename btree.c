#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node list;
list *temp,*root=NULL;

int create(int value)
{
   temp= (list*)malloc(sizeof(struct node));
   temp->data = value;
   temp->left=NULL;
   temp->right=NULL;
   return temp;
}

int insert(int value)
{
  create(value);
  if(root==NULL)
  {
      root=temp;
  }
  else if(value < root->data)
  {
      root->data = insert(root->left,value);
  }
  else
  {
    root->right = insert(root->right,value);
  }
  return root;
}

void deletet_element()
{
}

void postordertrav()
{
}

void preordertrav()
{
}

void inordertrav()
{

}

search()
{

}
int main()
{
  int choice,item;
  while(1)
  {
        printf("\n Binary Search Tree Menu\n");
        printf("2.\tInsert A Element\n");
        printf("3.\tDelete A Element\n");
        printf("4.\tInorder traversal of Binary tree\n");
        printf("5.\tPostorder traversal of Binary tree\n");
        printf("6.\tPreorder traversal of Binary tree\n");
        printf("7.\tSearch and replace\n");
        printf("8.\tExit\n");
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\n Enter new element: ");
			scanf("%d", &item);
            insert(root,item);
            break;
            case 2:
            deletet_element();
            break;
            case 3:
            inordertrav();
            break;
            case 4:
            postordertrav();
            break;
            case 5:
            preordertrav();
            break;
            case 6:
            search();
            break;
            case 7:
            exit(1);
        }
  }
}
