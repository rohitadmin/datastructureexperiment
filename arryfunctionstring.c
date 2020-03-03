#include<stdio.h>

void displays(char *A);

int main()
{
  char A[] = "Good";
  displays(A);
}

void displays(char *A)
{
  int i = 0;
  while(*(A+i)!='\0')
  {
    printf("%c",*(A+i));
    i++;
  }
}
