#include<stdio.h>
int main()
{
    int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int u=sizeof(a)/sizeof(a[0]);
    int max=a[0],curn=0;
    for(int i=0;i<u;i++)
    {
        curn=curn+a[i];
        if(curn>max)
        {
            max=curn;
        }
        if(curn<0)
        {
            curn=0;
        }
    }
    printf("%d\n",max);
    return 0;
}