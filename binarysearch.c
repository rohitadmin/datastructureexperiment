#include<stdio.h>
const int SIZE=10;
int binary_search(int arry[],int key,int low,int mid,int up)
{
    if(arry[mid]==key)
    {
        return mid;
    }

   else if(low>=SIZE-1 || up<=0 )
   {
       return -1;
   }
    else
    {
       if(key<arry[mid])
       {
           up=mid;
       }

       else
       {
           low=mid;
           mid=(low+up)/2;
       }
return binary_search(arry,key,low,mid,up);

}
}

main()
{
    int a[SIZE];int low=0,key,up=SIZE;
    int mid=(low+up)/2;
    for(int i=0;i<SIZE;i++)
        a[i]=i+1;
    printf("\nThe sorted array is::");
for(int i=0;i<SIZE;i++)
    printf("%d\t",a[i]);
    printf("\nEnter the key::");
    scanf("%d",&key);
    int res=binary_search(a,key,low,mid,up);
    if(res<0) printf("\nSearch key not found!!\n");
    else printf("\nSearch key found at position %d \n",res);
return 0;
}
