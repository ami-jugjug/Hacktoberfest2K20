#include <stdio.h>
#include <stdlib.h>
#define n 5
int cq[n];
int front=-1,rear=-1,item;
void enqueue()
{
  if(front==((rear+1)%n))
  {
    printf("CIRCULAR QUEUE IS FULL\n");
    return ;
  }
  else
  {
    printf("ENTER THE ELEMENT TO INSERT : ");
    scanf("%d",&item);
    if((front ==-1)&&(rear == -1))
    {
      front = 0;
      rear = 0;
      cq[rear] = item ;
    }
    else
    {
      rear = (rear+1) % n;
      cq[rear] = item;
    }
  }
}
void dequeue()
{
  if((front==-1)&&(rear==-1))
  {
    printf("QUEUE IS EMPTY\n");
    return;
  }
  else
  {
    item = cq[front];
    printf("DELETED ELEMENT IS : %d\n",item);
    if(front==rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      front = (front+1)%n;
    }
  }
}
void display()
{
  int i;
  if((front==-1)&&(rear==-1))
  {
    printf("QUEUE IS EMPTY\n");
    return;
  }
  printf("CIRCULAR QUEUE IS: ");
  if(front<rear)
  {
    for(i=front;i<=rear;i++)
    {
      printf("%d, ",cq[i]);
    }
  }
  else
  {
    for(i=front;i<n;i++)
      printf("%d, ",cq[i]);
    for(i=0;i<=rear;i++)
        printf("%d, ",cq[i]);
  }
  printf("\n");
}
void main()
{
  int ch;
  printf("\tMENU\n");
  printf("1.INSERT ELEMENT\n");
  printf("2.DELETE ELEMENT\n");
  printf("3.DISPLAY THE QUEUE\n");
  printf("4.EXIT");
  do
  {
    printf("\nENTER YOUR CHOICE : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : enqueue();
               break;
      case 2 : dequeue();
               break;
      case 3 : display();
               break;
      case 4 : exit(0);
      default : printf("\nINVALID ENTRY!!");
    }
  } while(ch!=4);
}
