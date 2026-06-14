#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int rear =-1,front =-1;
void enqueue();
void dequeue();
void display();

void enqueue()
{
	int value;
	if(rear==n-1)
	{
		printf("queue is full\n");
     }
     else 
     {
		 if(front==-1)
		    front=0;
		      printf("enter the element:");
		      scanf("%d", &value);
		    rear = rear+1;
		    queue[rear] = value;
     }
}
void dequeue() 
{
	if(front==-1 || front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("deleted element from the queue is:%d\n",queue[front]);
		front = front+1;
    }
}
void display()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("queue element are:\n");
	     for(i=front;i<=rear;i++)
	     {
			 printf("%d",queue[i]);
		 }
		 printf("\n");
	}
}
int main()
{
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	display();
	dequeue();
	dequeue();
	display();
  return 0;
}
	
