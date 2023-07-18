#include<stdio.h>
#include<stdlib.h>
int printLinkedlist();
int printLinkedlist()
{
    int choice;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*temp,*newnode;
    while(choice!=0)
    {
        newnode= ( struct node* )malloc( sizeof(struct node) );
        printf("Enter the value:\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head = newnode = temp;
        } 
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d",&choice);
        temp=head;
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}


int main()
{
    printLinkedlist();
}