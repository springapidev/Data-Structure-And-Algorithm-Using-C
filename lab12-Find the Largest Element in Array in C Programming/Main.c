#include <stdio.h>
 
int main () {

     int arr[6]={112,6,8,3,7,15};
int i,largestNumber;

largestNumber=arr[0];
for(i=0; i < sizeof(arr)/sizeof(int);i++){
   if(arr[i] > largestNumber){
       largestNumber=arr[i];
       
   }
}
     printf("Largest Element of Array: %d\n", largestNumber);
 
   return 0;
}