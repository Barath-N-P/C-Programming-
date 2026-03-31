#include <stdio.h>

int main() {
    char str[100];
    int i = 0,k=0;
    char ch;

    printf("Enter a string: ");

    while ((ch=getchar()) != '\n') {
        str[i] = ch;
        i++;
    }

    str[i] = '\0';   
    k=i;
    for(int co=k-1;co>=0;co--)
    {
        if(str[co]==' ')
        {
           int temp=co+1;
           while(temp<k && str[temp]!=' ')
           {
             printf("%c",str[temp++]);
           }
           printf("%c",str[co]);
        }
        if(co==0)
        {
            int coco=co;
            while(str[coco]!=' ' && str[coco]!='\0')
            {
                printf("%c",str[coco++]);
            }
        }

    }

    return 0;
}