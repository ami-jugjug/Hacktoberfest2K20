#include <stdio.h>
#include <stdlib.h>
#define n 4
int front=-1,rear=-1,dq[n],item;
void pushdq()
{
  int temp;
  printf("ENTER THE ELEMENT TO INSERT: ");
  scanf("%d",&item);
  if ((front == -1)&&(rear == -1))
  {
    front=0;
    rear=0;
    dq[front]=item;
  }
  else
  {
    if (front==0)
    {
      temp = n-1;
    }
    else
    {
      temp = front-1;
    }
    if(temp==rear)
    {
      printf("DQ IS FULL\n");
    }
    else
    {
      front = temp;
      dq[front]= item;
    }
  }
}
void popdq()
{
  if(front==-1 && rear==-1)
  {
    printf("DQ IS EMPTY\n");
  }
  else
  {
    printf("THE DELETED ELEMENT IS : %d\n",dq[front]);
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
    {
      front = (front+1)%n;
    }
  }
}
void inject()
{
  if(front==(rear+1)%n)
  {
    printf("DQ IS FULL\n");
  }
  else
  {
    printf("ENTER THE ELEMENT TO INSERT: ");
    scanf("%d",&item);
    if(front==-1 && rear==-1)
    {
      front=0;
      rear=0;
    }
    else
    {
      rear=(rear+1)%n;
    }
    dq[rear]=item;
  }
}
void eject()
{
  if(front==-1 && rear==-1)
  {
    printf("DQ IS EMPTY\n");
  }
  else
  {
    printf("THE DELETED ELEMENT IS : %d\n",dq[rear]);
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
    {
      if(rear==0)
      {
        rear = n-1;
      }
      else
      {
        rear = rear-1;
      }
    }
  }
}
void display()
{
  int i;
  if((front==-1)&&(rear==-1))
  {
    printf("DQ IS EMPTY\n");
  }
  else
  {
    printf("DQ IS : ");
    i=front;
    do
    {
      printf("%d, ",dq[i]);
      i=(i+1)%n;
    } while(i!=(rear+1)%n);
    printf("\n");
  }
}
void main()
{
  int ch;
  printf("\tMENU\n1.PUSHDQ\n2.POPDQ\n3.INJECT\n4.EJECT\n5.DISPLAY DQ\n6.EXIT");
  do
  {
    printf("\nENTER THE CHOICE: ");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1 : pushdq();
              break;
      case 2 : popdq();
             break;
      case 3 : inject();
             break;
      case 4 : eject();
             break;
      case 5 : display();
             break;
      case 6 : exit(0);
      default : printf("INVALID ENTRY\n");
    }
  } while(ch!=6);
}
