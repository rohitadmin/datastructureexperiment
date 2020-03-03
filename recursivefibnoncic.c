#include<stdio.h>

int fibononcic_recursive(int num)
{
    int F1=0,F2=1;

    if(num<=1)
        {
            return num;
        }

    else
    {
        return fibononcic_recursive(num-1)+ fibononcic_recursive(num-2);
    }

}


int main()
{
    int number;
    printf("\nEnter the position::\n");
    scanf("%d",&number);
    int result = fibononcic_recursive(number);
    printf("%d",result);
return 0;
}
