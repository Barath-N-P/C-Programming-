#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void delete(struct node **head,int data)
{
     struct node *temp=*head,*prev=NULL;
     if(temp==NULL)
     {
        printf("first enter a number to delete..\n");
        return;
     }
     if(temp!=NULL && temp->data==data)
     {
        *head=temp->next;
        free(temp);
        return;
     }
     while(temp!=NULL && temp->data!=data)
     {
        prev=temp;
        temp=temp->next;
     }
     if(temp==NULL)
     {
        printf("value not found\n");
        return;
     }
     prev->next=temp->next;
     free(temp);
     return;
    
}
void display(struct node **head)
{
       if(*head==NULL)
       {
          printf("Enter the data first to display..\n");
          return;
       }
       struct node *temp=*head;
       while(temp!=NULL)
       {
         printf("%d->",temp->data);
         temp=temp->next;   
       }
       printf("NULL\n");
       return;
}
void insertatend(struct node **head,int data)
{
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   struct node *temp=NULL;
   newnode->data=data;
   newnode->next=NULL;
   if(*head==NULL)
   {
    *head=newnode;
    return;
   }
   temp=*head;
   while(temp->next!=NULL)
   {
        temp=temp->next;
   }
   temp->next=newnode;
   return;
}
void insertatbeg(struct node **head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp=NULL;
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
    return;
}
int main()
{
    int choose;
    struct node *head=NULL;
    while(1)
    {
       printf("1.INSERTATFIRST \n 2.INSERTATEND \n 3.DISPLAY \n 4.DELETE A NODE \n 5.EXIT\n");
       scanf("%d",&choose);  
       if(choose==1)
       {
             int data;
             printf("Enter the data:");
             scanf("%d",&data);
             insertatbeg(&head,data); 
       }
       else if (choose==2)
       {
             int data;
             printf("Enter the data:");
             scanf("%d",&data);
             insertatend(&head,data);
       }
       else if (choose==3)
       {
             display(&head);
       }
       else if(choose==4)
       {
            int data;
            printf("Enter the data to delete:");
            scanf("%d",&data);
            delete(&head,data);
       }
       else if(choose==5)
       {
            break;
       }
      
    }     
    return 0;
}