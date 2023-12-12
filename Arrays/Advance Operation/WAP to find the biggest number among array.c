#include<stdio.h>
int main()
{
    int a[10],n,i,b;
    printf("Enter a size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    for (i=0;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
        else
        {
          continue;
        }
    }
        printf("Biggest number is =%d",b);
        return 0;
    }








