/*
#include<stdio.h>
int main()
{
     char a[100];
     int i=0,k=0;
     scanf("%s",a);
     while(a[i]!='\0')
     {
      if(a[i]=='(')
      {
        if(k<0)
        {
         k=-k;
        } 
        k++;
      }
      else if(a[i]==')')
      {
         k=k-1;
      }
      i++;
     }
     if(k<0)
     {
      k=-k;
     }
     printf("%d\n",k);
}
*/
#include<stdio.h>

int main()
{
    char s[100000];
    int i=0;
    int open=0;
    int add=0;

    scanf("%s",s);

    while(s[i] != '\0')
    {
        if(s[i] == '(')
        {
            open++;
        }
        else
        {
            if(open > 0)
            {
                open--;
            }
            else
            {
                add++;
            }
        }
        i++;
    }

    printf("%d\n", add + open);
}