#include <stdio.h>

int pow(int b, int c);

int main()
{
    int x,n,result;

    printf("Enter base number::\n ");

    scanf("%d",&n);

    printf("Enter power number:\n");

    scanf("%d",&x);

    result = pow(n, x);

    printf("%d^%d = %d", n, x, result);

    return 0;
}

int pow(int b, int c)
{
    if(c==0)
    {
        return 1;
    }
    int t=pow(b,c/2);

    if(c%2==0)
    {
        return (t*t);
    }

    else
    {
        return (b*t*t);
    }

}
