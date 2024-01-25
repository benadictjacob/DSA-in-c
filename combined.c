//insert at any position//
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
//to enter an element at any position//
 int pos;
 printf("enter the position of the element ot be printed\n");
 scanf("%d",&pos);
 temp=head;
 for(int j=1;j<pos;j++)
  { temp=temp->next;
     }
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter a new element");
  scanf("%d",&new->data);
  new->next=temp->next;
  temp->next=new;
  

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

