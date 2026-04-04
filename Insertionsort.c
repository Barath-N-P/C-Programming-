#include <stdio.h>
int main()
{
    int n,next=0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int y=i;
        while(y>0 && a[y] <a[y-1])
        {
            int temp=a[y];
            a[y]=a[y-1];
            a[y-i]=temp;
            y--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}
