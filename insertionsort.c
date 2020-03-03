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
  insertion_sort();
  printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
    {
      printf("\n%d", array[i]);
    }
    return 0;
}

int insertion_sort()
{
  int hole,i,j,value;

  for (i=1; i<n; i++)
  {
     value=array[i];
     hole=i;
    while(hole>0&&array[hole-1]>value)
    {
      array[hole] = array[hole-1];
      hole=hole-1;
    }
      array[hole]=value;
  }

  return 0;
}
