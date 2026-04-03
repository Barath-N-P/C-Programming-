#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int o=0;
    for(int i=0;i<n;i++)
    {
        o^=i;
    }
    for(int i=0;i<n;i++)
    {
        o^=a[i];
    }
    printf("\n");
    printf("%d\n",o);
    return 0;
}