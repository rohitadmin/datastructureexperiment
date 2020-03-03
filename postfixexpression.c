#include<stdio.h>
#define MAX 100
char stack[MAX];
int top=-1;
char infix[MAX];
char postfix[MAX];

int main()
{
    char x[MAX];
    int i;
    printf("Enter the expression ::");
    gets(x);
    puts(x);
}

void push_operation(char x)
{
    if(top>=MAX-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}

void pop_operation(char x)
{
    if(top<0)
    {
        printf("Stack underflow\n");
    }
    else
    {
        top--;
        x=stack[top];
        return x;
    }
}

void isoperator(char x)
{
if(x == '^' || x == '*' || x == '/' || x == '+' || x == '-')
{
   return 1;
}
else
return 0;
}

void operator_precedence(char x)
{
   int priority=0;
   if(x=='^')
   {
       priority=3;
   }
   else if(x=='*'||x=='/')
   {
       priority=2;
   }
   else if(x=='+'||x=='-')
   {
       priority=1;
   }
   else
   {
       return priority;
   }
}
