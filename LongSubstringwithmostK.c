#include<stdio.h>
int main()
{
    char s[100],freq[300]={0};
    int k,konch=0;
    scanf("%s",s);
    scanf("%d",&k);
    int left=0,max=0,dist=0;
    for(int right=0;s[right]!='\0';right++)
    {
        freq[s[right]]++;
        while(freq[s[right]]>1)
        {
            dist--;
            freq[s[left]]--;
            left++;
        }
        int len=right-left+1;
        if(len>k)
        {
            printf("%d\n",len);
            return 0;
        }
    }

}