#include<stdio.h>
#include <stdlib.h>
struct  node
{
 int data;
  struct node * next;
};
 struct node * head =NULL;
int main(){
//initialising nodes//
struct node * ptr,* temp , * new,*b;
for(int i=0;i<5;i++)
{ 
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("enter data ");
 scanf("%d",&ptr->data);
 ptr->next=NULL;
 if(head==NULL)
  {
   head=ptr;
   temp=ptr;
   }
 else
   {
    temp->next=ptr;
    temp=ptr;
    } 
}
  printf("enter a new element");
//to enter an element at first of the list//
   new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&new->data);
   new->next=head;
   head=new;
//insertion at the end//
 temp=head;
 while(temp->next!=NULL)
 {
  temp=temp->next;
  }
 b=(struct node*)malloc(sizeof(struct node));
 printf("enter the next element");
 scanf("%d",&b->data);
 temp->next=b;
//to print the whole linked list//
printf("entered  linked list");
if(head ==NULL) printf("empty");
else
{
 temp=head;
 while(temp!=NULL)
 {
  printf("%d",temp->data);
  temp=temp->next;
  }
}
return 0;
}
