#include<stdio.h>
#include<stdlib.h>
struct node 
{
 int data;
 struct node *next;
};
struct node *head=NULL;
struct node * ptr,* temp ,*new,*b,*no;

void create()
{//to create a functon//
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
    ptr->next=head;
    temp=ptr;
    
  
}
}}
void display()
{

if(head==NULL)
  { 
   printf("you need to first enter the list first\n");
 create();
    }
 else
 {
  printf("the printed existing linked list was\n");
  temp=head;
 while(temp->next!=head)
 {
  printf("%d",temp->data);
  temp=temp->next;
  }
  printf("%d",temp->data);
}
}
void insert_pos()
{

  if(head==NULL)
  {
   printf("you need to first enter the list first\n");
 create(); 
    }
else
{
 int pos;
 printf("enter the position of the element ot be printed\n");
 scanf("%d",&pos);
 temp=head;
 if(pos==1)
{
 new=(struct node*)malloc(sizeof(struct node));
  printf("enter a new element");
  scanf("%d",&new->data);
  new->next=head;
  head=new;
  display();
}
 for(int j=1;j<pos-1;j++)
  { temp=temp->next;
     }
  
  new=(struct node*)malloc(sizeof(struct node));
  printf("enter a new element");
  scanf("%d",&new->data);
  new->next=temp->next;
  temp->next=new;
  display();}
}
void delete_pos()
{
 if(head==NULL)
 {
 printf("you need to first enter the list first\n");
 create();
 }
else
 {
 //to inser any position//
 int pos;
 printf("enter the position of the element to be delelted\n");
 scanf("%d",&pos);
 temp=head;
 for(int j=1;j<pos-1;j++)
  { temp=temp->next;
     }
  no=temp->next->next;
  temp->next=no;
  display();
 }
}
int main()
{
//to give out choices//
 int choice=0;
 while(choice!=9){
 printf("\n DO\n");
 printf("\n1-create\n,2-insert-bigining\n,3-insert-end\n,4-insertposition\n,5-delelt-bigining\n,6-delete-end\n,7-delelte-pop\n,8-display\n,9-exit,");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1: create();
        break;
  case 2: //insert_bigining();
        break;
  case 3:// insert_end();
        break;
  case 4: insert_pos();
        break;
  case 5: // delelte_bigining();
        break;
  case 6: //delelte_end();
        break; 
  case 7: delete_pos();
        break;
  case 8: display();
        break;
  case 9: exit;
  }      
  }

 return 0;
}
