//Display array elements with Memory addresses in C Programming.
#include<stdio.h>
int main() {
   int arr[5] = { 5, 7, 9,11,13 };
 printf("=========== Normal Print ===============\n");
   printf("\n arr[0] ,value=%d : address=%u", arr[0], &arr[0]);
   printf("\n arr[1] ,value=%d : address=%u", arr[1], &arr[1]);
   printf("\n arr[2] ,value=%d : address=%u", arr[2], &arr[2]);
   printf("\n arr[3] ,value=%d : address=%u", arr[3], &arr[3]);
   printf("\n arr[4] ,value=%d : address=%u", arr[4], &arr[4]);
   printf("\n=========== For Loop Print ===============\n");
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
      printf("\n arr[%d]: value=%d : address=%u",i, arr[i], &arr[i]);
  }
   return (0);
}