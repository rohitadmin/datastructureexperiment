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
  selection_sort();
  printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
    {
      printf("\n%d", array[i]);
    }
    return 0;
}

int selection_sort()
{
  int min,swap,i,j;

  for (i=0; i<n; i++)
  {
    min=i;

    for (j=i+1; j<n; j++)
    {
      if(array[min]>array[j])
      {
          min=j;
      }
    }
      swap = array[i];
      array[i] = array[min];
      array[min] = swap;
  }
  return 0;
}
