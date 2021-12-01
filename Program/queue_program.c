#include <stdio.h>
#include <conio.h>
#define size 5
int queue[size];
int front = 0, rear = 0;
void main()
{
	int choice;
	void insert();
	void delet();
	void display();

	do
	{
		clrscr();
		printf("\n\t 1.Insert \\ En-Queue");
		printf("\n\t 2.Delete \\ De-Queue");
		printf("\n\t 3.Display");
		printf("\n\t 0.Exit");

		printf("\n\n\t Enter your choice:=");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			insert();
			display();
			break;
		case 2:
			delet();
			display();
			break;
		case 3:
			display();
			break;
		case 0:
			printf("\n\n\t End of progam \\ bye.....");
			break;
		default:
			printf("Invalid choice");
			break;
		}
		getch();
	} while (choice != 0);
}
void insert()
{
	if (rear == size)
	{
		printf("\n\t Queue is full");
	}
	else
	{
		printf("\n\t Enter any number := ");
		scanf("%d", &queue[rear]);
		rear++;
	}
}
void delet()
{
	if (rear == 0)
	{
		printf("\n\t Queue is empty");
	}
	else
	{
		printf("\n\t Delete element is =%d", queue[front]);
		if (front == rear)
			front = 0, rear = 0;
		else
			front++;
	}
}
void display()
{
	int a;
	if (rear == 0)
	{
		printf("\n\t Queue is empty");
	}
	else
	{
		for (a = front; a < rear; a++)
		{
			printf("\n\t %d", queue[a]);
		}
	}
}