#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a[6]={2,6,8,3,7,5};
   int b[6],i,j;
i=0;
j=sizeof(a)/sizeof(int);
   /* while loop execution */
   while( j > 0 ) {
     // printf("value of a: %d\n", a[j-1]);
      b[i]=a[j-1];
      i++;
      j--;
   }
   int p=0;
   while(p<sizeof(b)/sizeof(int)){
        printf("value of a: %d\n", b[p]);
        p++;
   }
 
   return 0;
}