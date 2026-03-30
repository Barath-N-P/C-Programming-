#include<stdio.h>
int CountDEin(int a[],int n,int k)
{
    int freq[10000]={0};
    int dist=0;
    for(int i=0;i<k;i++)
    {
        if(freq[a[i]]==0)
        {
            dist++;
        }
        freq[a[i]]++;
    }
    printf("%d",dist);
    for(int i=k;i<n;i++)
    {
        freq[a[i-k]]--;
        if(freq[a[i-k]]==0)
        {
            dist--;
        }
        if(freq[a[i]]==0)
        {
            dist++;
        }
        freq[a[i]]++;
        printf("%d ",dist);
    }
}
int main()
{
  int a[100],n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  for(int i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  CountDEin(a,n,k);
  return 0;
}