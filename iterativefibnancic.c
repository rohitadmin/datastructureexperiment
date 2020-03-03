#include<stdio.h>

int fibononcic_iterative(int num)
{
    int F1=0,F2=1,F;

    if(num<=1)
    {
        return num;
    }

    else
    {
        for(int i=2;i<=num;i++)
        {
        F=F1+F2;
        F1=F2;
        F2=F;
        }
    }
    return F;

}

int main()
{
    int number;
    printf("\nEnter the position::\n");
    scanf("%d",&number);
   // printf("\nFibonacci series upto %d\n", number);fibnoncic_series(number);
    printf("\n\nThe element in the %d the position of the fibonacci series evaluated using iterative approach is %d", number,fibononcic_iterative(number));
  //cout<<"\n\nThe element in the "<<n<<"th position of the fibonacci series evaluated using iterative approach is "<<fibo_itr(n);
return 0;
}
