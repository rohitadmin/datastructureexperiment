#include<stdio.h>

int factorial_recursive(int num);

int main()
{
    int number;
    printf("\nEnter the number\n");
    scanf("%d",&number);
    printf("\nThe factorial of %d using reccursive approach is %d", number, factorial_recursive(number));
    return 0;
}

int factorial_recursive(int num)
{
    int fact;
    if(num==0)
    {
        return 1;
    }
    else
    {
        fact=num*factorial_recursive(num-1);
        return fact;
    }

}


