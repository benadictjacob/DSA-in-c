#include <stdio.h>
#include <stdlib.h>
#define size 8
int front =-1,rear =-1;
int queue[size];
void insert()
{
//enqueue//
int n;
printf("enter the element to be inserted\n");
scanf("%d",&n);

 if(front==0 && rear==size-1||(front==rear+1))
{
 printf("the queue is full");
 
}

 else
 {
 //apllying modulocondition//
 rear=(rear+1)%size;
if(front==-1) front=0;
 }
 queue[rear]=n;
 printf("\n Value entered");
 
}

void delete()
{
//dequeue operation//
int n;
if(front==-1||rear==-1) printf("queue under flow");
else if (front==rear)
{
 front=-1;
  rear=-1;
}
else
{
 front=(front+1)%size;
}


}
void display()
{
 int i;
 for(i=front;i!=rear;i=(i+1)%size)
{
  printf("%d",queue[i]);
}
 printf("%d",queue[i]);
}
void main()
{
int choice;
while(choice!=4)
{
 printf("\nchoose an option\n");
 printf("\n1. insert an element\n2. delete an element\n3. display\n4 exit\n"); 
scanf("%d",&choice);
 switch(choice)
 {
  case 1: insert();
        break;
   case 2: delete();
        break;
   case 3: display();
        break;
  case 4: exit;
 }
}
}

