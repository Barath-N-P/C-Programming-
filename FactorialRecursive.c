#include<stdio.h>
int factrec(int fac)
{
    if(fac==0)
    {
        return 1;
    }
    return fac*factrec(fac-1);
}
int main()
{
    int fac;
    printf("Enter the Number:");
    scanf("%d",&fac);
    int factorial=factrec(fac);
    printf("%d\n",factorial);
    return 0;
}