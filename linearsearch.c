#include<stdio.h>
#include<conio.h>
#define SIZE 100
int arr[SIZE],n;
int linearsearch()
{
    int i,key,flag=0;
    printf("\nenter a key to be search\n");
    scanf("%d",&key);
     for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("key not found");
    }
    else{
        printf("key found at position = %d",i);
    }

}
int main()
{
    int i;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("enter a array data\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
  {
      printf("%d\t",arr[i]);
  }
    linearsearch();
return 0;
}
