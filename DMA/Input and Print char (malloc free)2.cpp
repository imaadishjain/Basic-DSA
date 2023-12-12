#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the number of Element=");
    scanf("%d",&n);

    char *a;
    a=(char*)malloc(n*sizeof(char));

    printf("Enter the String\n");
    scanf("%s",a);

    printf("Printing the Element of array\n");

    for(int i=0;i<n;i++)
    {
        printf(" %c",a[i]);
    }
    free(a);
    return 0;
}
