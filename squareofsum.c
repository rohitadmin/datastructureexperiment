#include<stdio.h>

int square(int i);

int squareofsum(int x,int y)
{
    int z = square(x+y);
    return z;
}

int total;
int square(int i)
{
    int j = i*i;
    return j;
}

int main()
{
    int a,b;
    printf("Enter first number for sum\n");
    scanf("%d",&a);
    printf("Enter second number for sum\n");
    scanf("%d",&b);
    total =squareofsum(a,b);
    printf("the square of sum =%d\n",total);
}
