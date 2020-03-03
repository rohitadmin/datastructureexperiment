
#include<stdio.h>

int main()
{
    char ch[6] = "Hello";
    char *ptr;
    ptr = &ch;
    printf("address of pointer ptr is =%d\n", ptr);
    printf("value of pointer ptr is =%c\n", *ptr);
    printf("value of pointer ptr is =%c\n", *(ptr+1));
    printf("value of pointer ptr is =%c\n", ptr[1]);
}
