#include <stdio.h>
#include <conio.h>
#define SIZE 10
int top = 0;
int a[SIZE];

void main()
{
	void push();
	void pop();
	void peep();
	void display();
	void update();

	int choice;
	do
	{
		clrscr();
		printf("\n\t\t 1.PUSH /insert");
		printf("\n\t\t 2.POP  / Delete");
		printf("\n\t\t 3.PEEP  / Search");
		printf("\n\t\t 4.DISPLAY");
		printf("\n\t\t 5.UPDATE");
		printf("\n\t\t 0.EXIT");

		printf("\n\n\t Enter your Choice:=");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			push();
			display();
			break;
		case 2:
			pop();
			break;
		case 3:
			peep();
			break;
		case 4:
			display();
			break;
		case 5:
			update();
			break;
		case 0:
			printf("\n\t bye....bye");
			break;
		default:
			printf("invalid choice");
			break;
		}
		getch();
	} while (choice != 0);
}
void push()
{
	if (top == SIZE)
		printf("\n\t stack is full");
	else
	{
		printf("\n\tEnter any no:");
		scanf("%d", &a[top]);
		top++;
	}
}
void pop()
{
	if (top == 0)
		printf("\n\t stack is empty");
	else
	{
		top--;
		printf("\n\t Delete information=%d", a[top]);
	}
}
void peep()
{
	int i, j;
	if (top == 0)
	{
		printf("\n\t stack is empty");
	}
	else
	{
		printf("\n\t Enter search value:+=");
		scanf("%d", &j);

		for (i = top - 1; i >= 0; i--)
		{
			if (a[i] == j)
			{
				printf("\n\t Serch value found on position=%d", top - i);
				break;
			}
			if (i == -1)
			{
				printf("\n\t serach value not found");
			}
		}
	}
}
void display()
{
	int i;
	if (top == 0)
		printf("\n\t stack is empty");
	else
	{
		for (i = top - 1; i >= 0; i--)
		{
			printf("\n\t %d", a[i]);
		}
	}
}

void update()
{
	int i, j;
	if (top == 0)
	{
		printf("\n\t stack is empty");
	}
	printf("\n\t found values:=");
	scanf("%d", &j);

	for (i = top - 1; i >= 0; i--)
	{
		if (a[i] == j)
		{
			printf("\n\t serach value foundon position=%d", top - 1);
			printf("\n\t enter new value:");
			scanf("%d", &a[i]);
			break;
		}
	}
	if (i == -1)
	{
		printf("\n\t update value not found");
	}
}
