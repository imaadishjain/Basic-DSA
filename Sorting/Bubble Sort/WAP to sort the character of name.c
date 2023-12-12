#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],t;
    int i,j,l,n;
     printf("Enter the Name that you want to sort\n");
     scanf("%s",a);
     l=strlen(a);
     n=l;
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 t=a[j];
                 a[j]=a[j+1];
                 a[j+1]=t;
             }
         }
     }
     printf("Printing the Sorted Name\n");
     for(i=0;i<l;i++)
     {
         printf("%c\n",a[i]);
     }
     return 0;
}
