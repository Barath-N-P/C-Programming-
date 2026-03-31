#include<stdio.h>
int main()
{
    int a[]={1,1,2};
    int j=0,u=sizeof(a)/sizeof(a[0]);
 
    for(int i=1;i<u;i++)
    {
         if(a[i]!=a[j])
         {
            j++;
            a[j]=a[i];
         }
    }
    for(int i=0;i<=j;i++)
    {
        printf("%d ",a[i]);
    }
}