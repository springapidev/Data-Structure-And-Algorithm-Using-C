#include<stdio.h>

int main() {
   int arr[100], insertedElement, numOfElements, i, position;

   printf("\nEnter number of elements :");
   scanf("%d", &numOfElements);

   for (i = 0; i < numOfElements; i++) {
      scanf("%d", &arr[i]);
   }

   printf("\nEnter the insertedElement to be inserted :");
   scanf("%d", &insertedElement);
for (i = 0; i < numOfElements; i++) {
      printf("%d", arr[i]);
      
      if(arr[i]>=insertedElement){
          position=i+1;
          break;
      }
   }
  

/* loop for the deletion  */
   while (position < numOfElements) {
      arr[position - 1] = arr[position];
      position++;
   }
   numOfElements--;  // No of elements reduced by 1

   //Print out the result of insertion
   for (i = 0; i < numOfElements; i++)
      printf("\n %d", arr[i]);

   return (0);
}