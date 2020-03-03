#include<stdio.h>
int main()
{
    int x,i;
    printf("\nEnter any number \n");
    scanf("%d",&x);
   // int *p;
    char *ch;
   // p=&x;
    ch = (char*)&x;

    for(i=1;i<=4;i++)
    {
        printf("%d\t",(int)*ch);
        ch++;
    }
    ch=NULL;
    return  0;

}
