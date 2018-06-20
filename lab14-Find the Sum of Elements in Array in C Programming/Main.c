#include <stdio.h>
 
int main () {

     int arr[6]={42,6,21,3,17,15};
int i,sum;

sum=0;
for(i=0; i < sizeof(arr)/sizeof(int);i++){
  sum+=arr[i];
}
     printf("Sum of all Element of Array: %d\n", sum);
 
   return 0;
}