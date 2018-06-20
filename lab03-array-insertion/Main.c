#include <stdio.h>

int main()
{
    printf("===============================Part 1============================\n");
    int x[]={2,8,6,4,3};
    for(int i=0;i<5;i++){
           printf("Data: %d \n",x[i]);
    }
    printf("===============================Part 2============================\n");
  printf("Size Of Array: %d \n",sizeof(x)/sizeof(int));

    return 0;
}