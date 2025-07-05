#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
void dequeue();
void display();
struct node
{
    int info;
    struct node *next;

};
struct node *head=NULL;
int main()
{
    int choice,data;
    
    while(1)
    {
    printf("enter 1 for enqueue\n");
    printf("enter 2 for dequeue:\n");
    printf("enter 3 0fr display:\n");
    printf("enter 4 for exit:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter a data:\n");
        scanf("%d",& data);
        enqueue(data);
        break;
        case 2:
        dequeue();
        break;

        case 3:
        display();
        break;

        case 4:
        exit(0);
        default:
        printf("invalid choice:\n");


    }

    }
    return 0;
}
void enqueue(int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation failed:\n");
        return;

    }
    newnode->info=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    printf("data enqueued :%d",data);

}
void dequeue()
{
    if(head==NULL)
    {
        printf("queue is underflow:\n");
        return;
    }
    struct node *ptr=head;
    head=head->next;
   
    printf("data dequeued :",ptr->info);
     free(ptr);

}
void display()
{
    struct node *ptr=head;
    if(ptr==NULL)
    {
        printf("queue is empty:\n");
        return;
    }
    printf("queue elements:");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}