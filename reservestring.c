#include<stdio.h>

int strlength(char str[])
{
	int length=0,i;

	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
return length;
}

void stringrev(char str[])
{
    int strlen=strlength(str);
    char temp;
    int first=0, end;
    for(end=strlen-1;end>first;end--)
    {
        temp=str[first];
		str[first]=str[end];
		str[end]=temp;
        first++;
    }
	printf("%s",str);
}


int main()
{
char strings[100];
printf("Enter ant string ::\n");
scanf("%s",strings);
printf("The Reverse of the Entered string is :: %s\n");
stringrev(strings);
return 0;
}
