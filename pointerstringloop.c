int main()
{
    char A[]="good";
    displaystring(A);
}
void displaystring(char *A)
{
    int i=0;
    while(*(A+i)!='\0')
    {
        printf("%c",*(A+i));
        i++;
    }
}
