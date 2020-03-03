#include<stdio.h>

int factorial_itterative(int num)
{
 int _fact=1,i;

 if(num==0)

 return _fact;

for(i=num; i>0; i--)
{
    _fact= _fact*i;
}

return _fact;

}
int main()
{
    int number,_fact;
    printf("\nEnter the number\n");
    scanf("%d",&number);
    printf("\nThe factorial of %d using itterative approach is %d",number ,factorial_itterative(number));
    return 0;
}
