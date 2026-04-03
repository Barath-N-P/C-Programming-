#include<stdio.h>
void reverse(int a[],int k,int n)
{
    if(k>=n)
    {
        return ;
    }
    int temp=a[k];
    a[k]=a[n];
    a[n]=temp;
    reverse(a,k+1,n-1);
}
int main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}