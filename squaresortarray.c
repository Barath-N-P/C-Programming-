#include<stdio.h>
void square(int a[],int n);
void sort(int a[],int n);

void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return ;
}
void squaresort(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
     a[i]=a[i]*a[i];
   }
   return ;
}
int main()
{
    int n;
    printf("Enter the Maximum size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    squaresort(a,n);
    sort(a,n);
    printf("sorted square array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}