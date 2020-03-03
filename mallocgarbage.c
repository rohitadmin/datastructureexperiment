#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length,i;
    printf("enter the length\n");
    scanf("%d",&length);

    int *array1=(int*)malloc(length*sizeof(int));

    printf("\nArray one with malloc\n");
    for(i=0;i<length;i++)
    {
        array1[i]=i+1;
        printf("%d\t",array1[i]);
    }

    printf("\nArray one address with malloc\n");
    for(i=0;i<length;i++)
    {
        printf("%p\t",&array1[i]);
    }

    int *array3=(int*)realloc(array1,(length*2)*sizeof(int));

    printf("\nArray three value with realloc\n");
    for(i=length-1;i<length*2;i++)
    {
        array3[i]=i+1;
    }
    for(i=0;i<length*2;i++)
    {
        printf("%d\t",array3[i]);
    }

    printf("\nArray three address with realloc\n");
    for(i=0;i<length*2;i++)
    {
        printf("%p\t",&array3[i]);
    }

    int *array_new=(int*)realloc(NULL,(length*2)*sizeof(int));

    printf("\nNew Array  relloc new values\n");
    for(i=0;i<length*2;i++)
    {
        printf("%d\t",array_new[i]);
    }
    free(array1);free(array3);free(array_new);

	return 0;
  }
