
#include<stdio.h>

int main() {
   int x[5]={2,6,8,9,10};
   int y[5],i;
   
   for (i = 0; i < sizeof(x)/sizeof(int); i++){
      y[i]=x[i];
      printf("\n %d", y[i]);
}
   return (0);
}