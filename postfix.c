#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
char infix[MAX];
char postfix[MAX];
int pi=-1;
int top=-1;

int isstackempty()
{
    if(top==-1)return 1;
    else return 0;
}
int push(char x)
{ int f=-1;
    if(top==MAX) return f;
    else
    {
        top++;
        stack[top]=x;
        f=1;
    }
    return f;
        }

char pop()
{ char f='\0';
    if(top==-1) return f;
    else
    {
        f=stack[top];
        top--;
    }
    return f;
}

int priority(char x)
    { int priority=0;
        if(x=='^')
            priority=3;
        else if(x=='*'||x=='/')
            priority=2;
        else if(x=='+'||x=='-')
            priority=1;
            else priority=-1;
            return priority;

    }
int isoperator(char x)
{
    int f=0;
    if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^')
        f=1;
    return f;
}

int isoperand(char x)
{int f=0;
    if((x>='A' && x<='Z') || (x>='a' && x<='z'))
        f=1;
    return f;

}
void showpost()
{
    printf("\nThe Postfix expression::");
    puts(postfix);
}

void in2post()
{ char token;
printf("\n\t TOKEN\t Stack\t Postfix");
    for(int i=0;infix[i]!='\0';i++)
    {  token=infix[i];
        printf("\n\t%c\t",token);

    for(int j=0;j<=top;j++)
    printf("%c",stack[j]);

printf("\t%s",postfix);




        if(token=='(')
            {
                int x=push(token);
        if(x<0)
        { printf("failure-push1!!");
                return;
        }
            }
        if(token==')')
        {
            while(stack[top]!='(')
            {
              pi++;
              postfix[pi]=pop();
            }
            char temp=pop();
        }
        if(isoperand(token))
            {
              pi++;
              postfix[pi]=token;
            }
        if(isoperator(token)&&isstackempty())
        { //printf("OPERATOR::%c",token);
            int x=push(token);
        if(x<0)
        { printf("failure-push 2!!");
                return;
        }

    }
    if(isoperator(token)&&isstackempty()==0)
    { //printf("\n\tStack not empty and OPERATOR:: %c",token);
       if(priority(stack[top])>= priority(token))
        {
            while(priority(stack[top])>= priority(token))
            {
              char p=pop();
         if(p=='\0')
                { printf("failure-pop 1!!");
                return;  }
            pi++;
            postfix[pi]=p;
            }
          int x=push(token);
        if(x<0)
        { printf("failure-push 2!!");
                return;
        }
        }
       else
        {  int x=push(token);
        if(x<0)
        { printf("failure-push 3!!");
                return;
        }

        }
    }
    }
    showpost();
}

void infixinit(char x[])
{ infix[0]='(';int i;
  for(i=0;x[i]!='\0';i++)
        infix[i+1]=x[i];
  infix[i+1]=')';
}


int main()
{ char x[MAX];
    printf("Enter the infix expression::");
    gets(x);
    puts(x);

    infixinit(x);
    puts(infix);
    in2post();

    return 0;
}
