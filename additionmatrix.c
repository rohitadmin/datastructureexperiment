#include <stdio.h>

void matrixaddition(int mat1[10][10],int mat2[10][10],int m,int n )
{

int additionresult[10][10];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
 additionresult[i][j]=mat1[i][j]+mat2[i][j];
}

}
printf("\nThe result after adding two square matrix is :: \n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
 printf("%d\t",additionresult[i][j]);
}
 printf("\n");
}
}

int main()
{
int mat1[10][10],mat2[10][10],m,n,i,j,k,additionresult[10][10];

printf("\nEnter the dimensions for the square matrices ::\n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements of the first square matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("\nEnter the elements for the second square matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
 scanf("%d",&mat2[i][j]);
}
}

matrixaddition(mat1,mat2,m,n);

return 0;
}


