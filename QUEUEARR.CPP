#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void deletei();
void display();
int queue[MAX];
int rear = - 1, front = - 1;
void main()
{
    clrscr();
    int ch;
	printf("QUEUE OPERATIONS");
	printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
	while(1)
	{
	printf("\nEnter your choice:");
	scanf("%d", &ch);
	switch(ch)
	{
	    case 1:
	    insert();
	    break;
	    case 2:
	    deletei();
	    break;
	    case 3:
	    display();
	    break;
	    case 4:
	    exit(1);
	    default:
	    printf("Wrong choice \n");
	}
    }
    getch();
}

void insert()
{
    int item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
	if (front == - 1)
		front = 0;
	printf("Inset the element in queue : ");
	scanf("%d", &item);
	rear = rear + 1;
	queue[rear] =item;
    }
}

void deletei()
{
    if (front == - 1 || front > rear)
    {
	printf("Queue Underflow \n");
	return ;
    }
    else
    {
	printf("Element deleted from queue is : %d\n", queue[front]);
	front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
	printf("Queue is empty \n");
    else
    {
	printf("Queue is : \n");
	for (i = front; i <= rear; i++)
	    printf("%d ", queue[i]);
	printf("\n");
    }
}