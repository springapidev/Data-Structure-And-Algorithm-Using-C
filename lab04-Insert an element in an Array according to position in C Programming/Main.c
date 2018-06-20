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

   printf("\nEnter the position");
   scanf("%d", &position);

   //Create space at the specified position
   for (i = numOfElements; i >= position; i--) {
      arr[i] = arr[i - 1];
   }

   numOfElements++;
   arr[position - 1] = insertedElement;

   //Print out the result of insertion
   for (i = 0; i < numOfElements; i++)
      printf("\n %d", arr[i]);

   return (0);
}