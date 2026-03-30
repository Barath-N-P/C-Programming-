#include<stdio.h>
#include<stdlib.h>
struct kol
{
    int out;
    struct kol *next;
};
int main()
{
   int y;
   struct kol *head=NULL;
   struct kol *temp=NULL;
   struct kol *copy=NULL;
   head=(struct kol*)malloc(sizeof(struct kol));
   scanf("%d",&(head->out));
   temp=head;
   copy=head;
   do
   {
       printf("to add new node choose 1,to exit choose 0\n");
       scanf("%d",&y);
       if(y==1)
       {
          struct kol *new=(struct kol*)malloc(sizeof(struct kol));
          printf("Enter the data:\n");
          scanf("%d",&(new->out));
          temp->next=new;
          new->next=NULL;
          temp=new;
       }
       
   }while(y==1);

   while(copy!=NULL)
   {
       printf("%d\n",copy->out);       
       copy=copy->next;
   }
}