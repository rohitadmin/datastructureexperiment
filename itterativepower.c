#include <stdio.h>
int main()
{
    int x,n,i=1;
    int result =1;
    printf("Enter the base x::\n");
    scanf("%d",&x);

    printf("Enter the exponent n::\n");
    scanf("%d",&n);

    while(i<=n)
    {
        result = result*x;
        i++;
    }

    printf("%d^%d=%d",x,n,result);

    return 0;

}
