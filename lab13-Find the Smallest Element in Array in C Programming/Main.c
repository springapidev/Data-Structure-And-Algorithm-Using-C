#include <stdio.h>
 
int main () {

     int arr[6]={112,6,1,3,7,15};
int i,smallestNumber;

smallestNumber=arr[0];
for(i=0; i < sizeof(arr)/sizeof(int);i++){
   if(arr[i] < smallestNumber){
       smallestNumber=arr[i];
       
   }
}
     printf("Smallest Element of Array: %d\n", smallestNumber);
 
   return 0;
}