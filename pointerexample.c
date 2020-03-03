#include<stdio.h>
int main()
{
    int i;
    printf("enter a value\n");
    scanf("%d",&i);
    int *p;
    p=&i;
    printf("address of i=%d\n",&i);
    printf("value of i=%d\n",i);
    printf("address of i as value of p=%d\n",p);
    printf("value at address p =%d\n",*p);
}
