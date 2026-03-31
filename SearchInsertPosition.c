#include<stdio.h>
int main()
{
    int n,k=0,t;
    printf("Enter the N elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //linear search o(n)
    
    printf("Enter the target:");
    scanf("%d",&t);
    /*
    while(k<n)
    {
        if(t==a[k] || t<a[k])
        {
            printf("%d",k);
            return 0;
        }
       

        k++;
    }
    printf("%d",n);
    return 0;
    */
   //binary search o(log n)
   int left = 0, right = n - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(a[mid] == t)
        {
            printf("%d", mid);
            return 0;
        }
        else if(a[mid] < t)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("%d\n",left);
    return 0;
}