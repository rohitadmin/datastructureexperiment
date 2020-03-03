
#include <stdio.h>
int main()
{
  int array[100],n,i;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  {
      scanf("%d", &array[i]);
  }
   for (i = 0; i < n; i++)
  {
      printf("%d\t",array[i]);
  }
  merge_sort(array,0,n-1);
  printf("\n\nAfter Merge sorting:\n");
    for(i=0; i<n; i++)
    {
      printf("\t%d", array[i]);
    }
    return 0;
}

void merge_sort(int a[],int low,int high)
{
	int mid;

	if(low<high)
	{
		mid=low+(high-low)/2;
		merge_sort(a,low,mid);		//left recursion
		merge_sort(a,mid+1,high);	//right recursion
		merge(a,low,mid,high);	//merging of two sorted sub-arrays
	}
}

void merge(int a[],int L[],int R[])
{
    //array used for merging
	int i,j,k;
	int n1=L[50];	//beginning of the first list
    int n2=R[50];	//beginning of the second list
    i=0,j=0,k=0;
	while(i<n1 && j<n2)	//while elements in both lists
	{
		if(L[i]<=R[j])
        {
            a[k]=L[i];
			i++;
        }

		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}

	while(i<n1)
    {
       a[k]=L[i];
       i++;
       k++;
    }//copy remaining elements of the first list

	while(j<n2)
    {
       a[k]=R[j];
       j++;
       k++;
    }//copy remaining elements of the first list
	//Transfer elements from temp[] back to a[]
}
