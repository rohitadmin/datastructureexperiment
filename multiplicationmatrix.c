#include <stdio.h>

void matrixmult(int mat1[10][10],int mat2[10][10],int m,int n,int p )
{

int _multiplyresult[10][10];
int i,j,k;

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
_multiplyresult[i][j]=0;

for(int k=0;k<p;k++)
 {

 _multiplyresult[i][j]= _multiplyresult[i][j]+mat1[i][k]*mat2[k][j];

 }
}
}
printf("The result after multiplying two matrix is :: \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",_multiplyresult[i][j]);
}
 printf("\n");
}

}
int main()
{
int mat1[10][10],mat2[10][10],m,n,p,i,j,k,_multiplyresult[10][10];
printf("Enter the dimensions for the first square matrices :: \n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements of the first square matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
 scanf("%d", &mat1[i][j]);
}
}
printf("Enter the number of column for the second square matrices :: \n");
scanf("%d",&p);
printf("\nEnter the elements for the second square matrix \n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &mat2[i][j]);
}
}
matrixmult(mat1,mat2,m,n,p);
return 0;
}
