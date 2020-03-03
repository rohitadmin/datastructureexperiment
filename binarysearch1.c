#include<stdio.h>
#include<conio.h>
#define SIZE 100
int n,arr[SIZE];
int binarysearch()
{
    int i,key,flag=0,mid,low=0,high=n;
    printf("\nenter a key to be search in Binary Searching\n");
    scanf("%d",&key);
    while(low<high)
    {
        mid=(low+high)/2;
        if(key==arr[mid])
        {
            flag=1;
            break;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("key is found at position =%d",i);
    }
    else
    {
        printf("key is not found");
    }
}


int main()
{
    int i;
    printf("Enter a length of array\n");
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
    binarysearch();
   // linearsearch();
   return 0;
}
