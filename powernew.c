
#include <stdio.h>
int pow(int num1, int num2);
int f[30];
int main()
{
    int x,n,result;

    printf("Enter base number::\n ");

    scanf("%d",&n);

    printf("Enter power number(any positive integer):\n");

    scanf("%d",&x);

    result = pow(n, x);

    printf("%d^%d = %d", n, x, result);

    return 0;
}
int pow(int b, int c)
{
    if (c == 0)
    {
        return 1;
    }

    else
    {

    }

}
