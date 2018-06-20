#include<stdio.h>

int main() {
   int x[5]={2,6,8,9,10};
   int i,searchElement;
   
   searchElement=9;
   i=0;
  while(i<5 && x[i]!=searchElement){
      i++;
  }
 
      //If i < 5 then Match found
   if (i < 5) {
       printf("\nSearch Element Found at index=[%d], %d",i, i+1);
   } else {
      printf("Number not found");
   }
     

   return (0);
}