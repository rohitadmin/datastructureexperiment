#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct node* insert(struct node* root, int data)
{
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}
void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);
}
void preorder(struct node* root){
    if(root == NULL) return;
    printf("%d ->", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ->", root->data);
}

struct node* deletion_element(struct node *root, int data){
    struct node*temp;
    if(root == NULL) return;

    else if(data < root->data)
    {
        root->left= deletion_element(root->left,data);
    }
    else if(data > root->data)
    {
        root->right= deletion_element(root->right,data);
    }
    else
    {
        if(root->right && root->left)
        {
            temp=search_min(root->right);
            root->data=temp->data;
            root->right=deletion_element(root->right,temp->data);
        }
        else
        {
            temp=root;
            if(root->left==NULL)
            {
                root=root->left;
            }
            else if(root->right==NULL)
            {
                root=root->left;
            }
            free(temp);
        }
    }
    return root;

}

int search_bst(struct node *link,int key)
{ int res=-1;
    if(link==NULL) res=0;
    else if(link->data==key) res=1;
    else if(link->data < key)
        res=search_bst(link->right,key);
    else
     res=search_bst(link->left,key);
    return res;
}


void search_min(struct node* root){
    if(root == NULL) return;

  if(root->left)
  {
      return search_min(root->left);
  }
  else{
    return root;
  }
}

void search_max(struct node* root){
    if(root == NULL) return;

  if(root->right)
  {
      return search_min(root->right);
  }
  else
    {
    return root;
  }
}

main(){
    int data,max,i;
    struct node *root = NULL;
    printf("enter a maximum element to be inserted:\n");
    scanf("%d",&max);
    for(i=1;i<=max;i++)
    {
       printf("enter a element to be inserted:\n");
       scanf("%d",&data);
       root = insert(root,data);
    }
    printf(" Search result 30::",search_bst(root,30));
    inorder(root);
    printf("\nDeleting 40..\n");
    root=deletion_element(root,40);
    printf("\nROOT = %d\n",root->data);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    root=deletion_element(root,data);

return 0;
}
