//to count the numbere of elements in a linked list//
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
 //to count the elements in a linkedlist//
int count=0;
//to print the whole linked list//
printf("entered  linked list\n		");
if(head ==NULL) printf("empty");
else
{
 temp=head;
 while(temp!=NULL)
 {
  count ++;
  printf("%d",temp->data);
  temp=temp->next;
  }
}
 printf("the no of elements in the linkedlist is %d",count);
return 0;
}

