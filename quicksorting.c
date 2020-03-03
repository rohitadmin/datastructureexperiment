#include<stdio.h>
#include<conio.h>
#define size 100
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element

	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


// Driver program to test above functions
int main()
{
    int arr[size], i, n;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\n Enter the elements of the array: ");
    for(i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
    quickSort(arr, 0, n-1);
    printf("\n The sorted array is: \n");
    for (i=0; i <n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

//T(n)=T(nlogn) best case
//analysis of algorithm in the case of
//best case and average case complexity for the n sequence is
//T(n) = 2T(n/2)+(n)
// Solving this T(n) = 2T(n/2)+(n) by master theroram
// where a=2 , b=2 , k=1 ,p=0
//   O(n^k log^p+1 n)
//O(n^1 log^0+1 n)
//O(nlogn)


//analysis of algorithm in the case of
//worst case complexity for the n sequence is
//T(n) = T(n-1)+(n)+ 1
// Solving this T(n)=T(n-1)+(n) by master theroram
// where a=1 , b=1 , k=1 , here a=1
//so O(n^k+1)
// O(n^2)
//
