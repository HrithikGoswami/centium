#include<stdio.h>
#include<conio.h>

int stack[100],ch,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    clrscr();
    top=-1;
    printf("Enter the size of STACK:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    do
    {
	printf("\nEnter the Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
		push();
		break;
	    case 2:
		pop();
		break;
	    case 3:
		display();
		break;
	    case 4:
		printf("\nEXIT");
		break;
	    default:
		printf("\nWRONG CHOICE");
	}
    }while(ch!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
	printf("\nSTACK is overflow");

    }
    else
    {
	printf("Enter a value to be pushed:");
	scanf("%d",&x);
	top++;
	stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
	printf("\nStack is underflow");
    }
    else
    {
	printf("\nThe popped element is: %d",stack[top]);
	top--;
    }
}
void display()
{
    if(top>=0)
    {
	printf("\nThe elements in STACK: \n");
	for(i=top; i>=0; i--)
	    printf("%d\t",stack[i]);
    }
    else
    {
	printf("\nThe STACK is empty");
    }

}