#include<stdio.h>
int slide(int a[100],int n,int k)
{
    int freq[100000]={0};
    int left=0;
    int dist=0;
    int max=n+1;
    for(int right=0;right<n;right++)
    {
        if(freq[a[right]]==0)
        {
            dist++;
        }
        freq[a[right]]++;
        while(dist>=k)
        {
            int len=right-left+1;
            if(len<max)
            {
                max=len;
            }
            freq[a[left]]--;
            if(freq[a[left]]==0)
            {
                dist--;
            }
            left++;
        }
    }
    if(max==n+1)
    {
        return -1;
    }
    return max;
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
   int kow=slide(a,n,k);
   printf("%d",kow);
   return 0;
}