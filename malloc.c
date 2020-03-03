#include<stdio.h>
#include<stdlib.h>
int main()
{
    int tempval;
    printf("enter the temp value\n");
    scanf("%d",&tempval);

    int *ptr=(int*)malloc(sizeof(int));

	printf("\n Enter the ptr value\n");
	scanf("%d", &(*ptr));

    printf("\nthe value of = %d\n",tempval);
    printf("the new ptr value=%d\n",*ptr);
    printf("The address of ptr variable=%d\n",ptr);
	return 0;
  }
