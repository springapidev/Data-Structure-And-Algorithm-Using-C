#include<stdio.h>

int main() {
   int x[5]={2,6,8,9,9};
   int i,searchElement;
   int rs[1];
   
   searchElement=9;
   i=0;
  while(i<5 && x[i]!=searchElement){
      i++;
  }
 
      //If i < 5 then Match found
      int j=0;
   if (i < 5) {
       rs[j]=x[i];
        printf("\nSearch Element Found at index=[%d], %d",j, rs[j]);
     j++;
   } else {
      printf("Number not found");
   }
    // printf("\nSearch Element Found at index=[%d], %d",i, rs[0]);
     

   return (0);
}