#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

node *newnode,*start=NULL,*end=NULL,*tptr;

void display()
{
    for(tptr=start; tptr!=NULL; tptr=tptr->next)
        printf("%d ", tptr->data);
}

void insert_node(int gd)
{
    newnode=(node *)malloc(1*sizeof(node));
    newnode->data=gd;
    newnode->next=NULL;
    if(start==NULL)
        start=end=newnode;
    else
    {
        end->next=newnode;
        end=newnode;
    }
}

int main()
{
    int num;
    while(1)
    {
        scanf("%d",&num);      // 10 20 30 40 -1
        if(num == -1)
            break;
        insert_node(num);     // 1- -> 20 -> 30 -> 40 -> 50 
    }
    display();
}
