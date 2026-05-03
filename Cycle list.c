#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int cycle(struct node *head)
{
    struct node *slow=head ,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
struct node *creation(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
int main()
{
    struct node *head=creation(1);
    head->next=creation(2);
    head->next->next=creation(3);
    head->next->next->next=creation(4);
    head->next->next->next->next=creation(5);
    head->next->next=head->next;
    if(cycle(head))
    {
        printf("its cycle link list...\n");
    }
    else
    {
        printf("no cycle..\n");
    }
    return 0;
}