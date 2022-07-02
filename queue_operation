#include <stdio.h>
#include<stdlib.h>
#define MAX 6
void insert();
void remov();
void display();
int queue[MAX], rear=-1, front=-1, item;
main()
{
int ch;
do
{
printf("\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
printf("\nEnter your choice:");
scanf("%d", &ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
remov();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\n\nInvalid entry. Please try again...\n");
}
} while(ch<=4);
}
void insert()
{
if(rear == MAX-1)
printf("\nQueue is full.");
else
{
printf("\n\nEnter ITEM:");
scanf("%d", &item);
if (rear == -1 && front == -1)
{
rear = 0;
front = 0;
}
else
rear++;
queue[rear] = item;
printf("\n\nItem inserted: %d", item);
}
}
void remov()
{
if(front == -1)
printf("\n\nQueue is empty.");
else
{
item = queue[front];
if (front == rear)
{
front = -1;
rear = -1;
}
else
front++;
printf("\n\nItem deleted: %d", item);
}
}
void display()
{
int i;
if(front == -1)
printf("\n\nQueue is empty.");
else

{
printf("\n\n");
for(i=front; i<=rear; i++)
printf( "%d", queue[i]);
}
}
