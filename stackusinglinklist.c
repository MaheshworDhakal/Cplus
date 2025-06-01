#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* Next;
};
struct Node* top;
void push(int);
void pop();
void display();
int main ()
{
    int choice,data;
    while(1)
    {
        printf("enter 1 for push:\n\n");
        printf("enter 2 for pop :\n\n");
        printf("enter 3 for display :\n\n");
        printf("enter 4 for exit :\n\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("enter a data:\n\n");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                 pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("invalid choice :\n\n");

        }
    }
}
void push(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode ->data=data;
    newnode ->Next =top;
    top=newnode;
    printf("data pushed successfully:\n\n");

}
void pop()
{
    if(top==NULL)
    {
        printf("stack underflow:\n\n");
        return;
    }
    struct Node* ptr=top;
    top=top->Next;
    free(ptr);
}
void display()
{
    struct Node* ptr=top;
    if(ptr==NULL)
    {
        printf("stack is empty :\n\n");
        return;

    }
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->Next;

    }
}
