#include<stdio.h>
int main()
{
    int a[]={0,1,0,0,3,13},j=0;  
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
          if(a[i]!=0)
          {
            int temp=a[i];          
            a[i]=0;
            a[j++]=temp;
          }
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }  
}