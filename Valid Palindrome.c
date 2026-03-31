#include<stdio.h>
#include<ctype.h>
void validpalidrome(char a[],int n)
{
  int left=0,right=n-1;  
  while(left<right)
  {
     if ((a[left] >= 65 && a[left] <= 90) ||
    (a[left] >= 97 && a[left] <= 122) ||
    (a[left] >= 48 && a[left] <= 57))
     {
        if((a[right] >= 65 && a[right] <= 90) ||
           (a[right] >= 97 && a[right] <= 122) ||
            (a[right] >= 48 && a[right] <= 57))
          {
            if(tolower(a[left])==tolower(a[right]))
            {
                left++;
                right--;
            }
            else
            {
                printf("False\n");
                return;
            }
          }
          else
          {
            right--;
          }
     }
     else
     {
        left++;
     }
  }
  printf("True\n");
  return;
}
int main()
{
    char a[200],ch;
    int i=0;
    while((ch=getchar())!='\n')
    {
        a[i++]=ch;
    }
    a[i]='\0';
    i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    validpalidrome(a,i);
    return 0;
}