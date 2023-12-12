#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *a;
    printf("Enter the Size=");
    scanf("%d",&n);

    a=(int*) calloc(n,sizeof(int));  // Default Value is Zero

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
