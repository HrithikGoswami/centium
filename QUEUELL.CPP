#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int info;
    struct node *link;
};

typedef struct node snode;
void insert_node(int data);
void delete_node();
void display();

snode *front=NULL, *rear=NULL, *front1, *temp;

void main()
{
    clrscr();
    int ch, no;
    printf("OPERATIONS");
    printf("\n1.INSERTION\n2.DELETION\n3.DISPLAY\n4.EXIT");
    while(1)
    {
	printf("\nEnter your choice:");
	scanf("%d", &ch);
	switch(ch)
	{
	    case 1:
		printf("\nEnter the data:");
		scanf("%d", &no);
		insert_node(no);
		break;
	    case 2:
		delete_node();
		break;
	    case 3:
		display();
		break;
	    case 4:
		exit(0);
		break;
	    default:
		printf("\nWRONG CHOICE");
	}
    }
    getch();
}

void insert_node(int data)
{
    if(rear==NULL)
    {
	rear=(snode *)malloc(1*sizeof(snode));
	rear->link=NULL;
	rear->info=data;
	front=rear;
    }
    else
    {
	temp=(snode *)malloc(1*sizeof(snode));
	rear->link=temp;
	rear->info=data;
	temp->link=NULL;
	rear=temp;
    }
}

void delete_node()
{
    front1=front;
    if(front1==NULL)
    {
	printf("\nQUEUE IS EMPTY");
	return;
    }
    else if(front1!=NULL)
    {
	front1=front1->link;
	printf("\nThe deleted element is: %d", front->info);
	free(front);
	front=front1;
    }
    else
    {
	printf("\nThe deleted element is: %d", front->info);
	free(front);
	front=NULL;
	rear=NULL;
    }
}

void display()
{
     front1=front;
     if((front1==NULL)&&(rear=NULL))
	printf("\nQUEUE IS EMPTY");
     while(front1!=rear)
     {
	printf("%d\t", front1->info);
	front1=front1->link;
     }
     if(front1==rear)
	printf("%d", front1->info);
}











