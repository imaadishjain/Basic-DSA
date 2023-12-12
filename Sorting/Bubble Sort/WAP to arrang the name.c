#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][10],t[40];
    int n,i,j;
    printf("Enter Size\n");
    scanf("%d",&n);
    printf("Enter names\n");
    for(i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
    // SORTING
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }s
    }
    printf("Sorted Two Dimensional array\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",r,a[i]);
    }
    return 0;
}
