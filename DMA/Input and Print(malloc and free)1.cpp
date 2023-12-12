#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the Size of array=");
    scanf("%d",&n);

    int *a; //int* p

    a=(int*)malloc(n*sizeof(int));  //DMA

    printf("Enter the element of array\n");

    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Printing the array\n");

    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    free(a); // Deallocate the array OR Delete the array
    return 0;
}
