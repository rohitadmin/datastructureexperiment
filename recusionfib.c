#include<stdio.h>

int F[51];

int fib(int n)
{

    if(n==0||n==1)
    {
        return n;
    }
    if(F[n]!=-1)
    {
        return F[n];
    }
    else
        {
        F[n]=fib(n-1)+fib(n-2);
        return F[n];
    }

}

int main()
{
    int n, a;
    int result;
    printf("enter a number\n");
    scanf("%d",&n);
    for(int i=0;i<51;i++)
    {
        F[i]=-1;
    }
    result=fib(n);
    printf("%d",result);
}
