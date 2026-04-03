#include<stdio.h>
/* Recursive which is slow 
int fibonacci(int n)
{ 
   if(n==0)
   {
    return 0;
   }
   else if(n==1)
   {
    return 1;
   }
   else
   {

    return fibonacci(n-1) + fibonacci(n-2);
   }
   
}
int main()
{
  int n;
  scanf("%d",&n);

  printf("%d",fibonacci(n));
}
  */
 //using loop which is fast
 int main()
 {
    int n,a=0,b=1,next;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
          printf("%d ",a);
          next=a+b;
          a=b;
          b=next;
    }
    return 0;
 }