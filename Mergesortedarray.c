#include<stdio.h>
void Mergesort(int a[],int b[],int n1, int n2);
void Mergesort(int a[],int b[],int n1, int n2)
{
    int res[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j]) res[k++] = a[i++];
        else res[k++]=b[j++];
    }
    while(i<n1)
    {
        res[k++]=a[i++];
    }
    while(j<n2) res[k++]=b[j++];
    for(int u=0;u<k;u++)
    {
        printf("%d ",res[u]);
    }
    return ;

}
int main()
{
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int n1=sizeof(a)/sizeof(a[0]),n2=sizeof(b)/sizeof(b[0]);
    Mergesort(a,b,n1,n2);
}