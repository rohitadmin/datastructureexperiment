#include <stdio.h>
int array[100],n;
int main()
{
  int i;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  {
      scanf("%d", &array[i]);
  }
   for (i = 0; i < n; i++)
  {
      printf("%d",array[i]);
  }
  bubble_sort();
  printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
    {
      printf("\n%d", array[i]);
    }
   binarysearch();
    return 0;
}

int bubble_sort()
{
  int swap,i,j;

  for (i=0; i<n; i++)
  {

    for (j=0; j<n-i-1; j++)
    {
      if(array[j]>array[j+1])
      {
      swap = array[j];
      array[j] = array[j+1];
      array[j+1] = swap;
      }
    }

  }
  return 0;
}

int binarysearch()
{
    int i,key,flag=0,mid,low=0,high=n;
    printf("\nenter a key to be search in Binary Searching\n");
    scanf("%d",&key);
    while(low<high)
    {
        mid=(low+high)/2;
        if(key==array[mid])
        {
            flag=1;
            break;
        }
        else if(key<array[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("key is found");
    }
    else
    {
        printf("key is not found");
    }
}
