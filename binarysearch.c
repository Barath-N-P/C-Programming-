#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter the N elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Target:");
    scanf("%d",&t);
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==t)
        {
            printf("%d\n",mid);
            return 0;
        }
        else if(a[mid]>t)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    printf("%d\n",-1);
    return 0;


}