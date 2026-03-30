#include<stdio.h>
int LongSub(char k[])
{
    int freq[300]={0};
    int left=0;
    int max=0;
    for(int right=0;k[right]!='\0';right++)
    {
        freq[k[right]]++;
        while(freq[k[right]]>1)
        {
            freq[k[left]]--;
            left++;
        }
        int len=right-left+1;
        if(len>max)
        {
            max=len;
        }
    }
    return max;
}
int main()
{
    char k[100];
    scanf("%s",k);
    int count=LongSub(k);
    printf("%d",count);
    return 0; 
}