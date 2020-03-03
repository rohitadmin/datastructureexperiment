#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;


int MIN(int x, int y)
{   int min=x;
    if(y<x)min=y;
    return min;
}
main() {
   int i,j,str1_size,str2_size,t,c;
   int D[50][50];

   char str1[] = "car";
   char str2[] = "cat";

   str1_size = strlen(str1);
   str2_size= strlen(str2);
   for(i=0;i<=str1_size;i++) {
      D[0][i] = i;
   }
   for(j=0;j<=str2_size;j++) {
      D[j][0] = j;
   }
   for (j=1;j<=str1_size;j++) {
      for(i=1;i<=str2_size;i++) {
         if(str1[i-1] == str2[j-1]) {
            c = 0;
         } else {
            c = 2;
         }
         t = MIN((D[i-1][j]+1),(D[i][j-1]+1));
         D[i][j] = MIN(t,(D[i-1][j-1]+c));
      }
   }
   cout<<"The Levinstein Min Edit Distance is::"<<D[str2_size][str1_size];
   return 0;
}
