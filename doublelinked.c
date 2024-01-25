#include <stdio.h>
#include <stdlib.h>
// to ctreate a structure//
struct node
{
  int data;
  struct node *next;
  struct node *previous;
};
struct node *head = NULL;
struct node *ptr, *temp, *new, *b, *no;
void create();
void display();
void insert_bigining();
void insert_end();
void insert_pos();
void delelte_bigining();
void delelte_end();
void create();
void display();
void insert_bigining();
void insert_end();
void insert_pos();
void create();
void display();
void insert_bigining();
void insert_end();
void insert_pos();
void delete_pos();
void exit();

int main()
{
  // to give out choices//
  int choice = 0;
  while (choice != 9)
  {
    printf("\n DO\n");
    printf("\n1-create\n,2-insert-bigining\n,3-insert-end\n,4-insertposition\n,5-delelt-bigining\n,6-delete-end\n,7-delelte-pop\n,8-display\n,9-exit,");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      create();
      break;
    case 2:
      insert_bigining();
      break;
    case 3:
      insert_end();
      break;
    case 4:
      insert_pos();
      break;
    case 5:
      delelte_bigining();
      break;
    case 6:
      delelte_end();
      break;
    case 7:
      delete_pos();
      break;
    case 8:
      display();
      break;
    case 9:
      exit;
    }
  }

  return 0;
}
void create()
{ // to create a functon//
  for (int i = 0; i < 5; i++)
  {
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("enter data ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
    ptr->previous = NULL;
    if (head == NULL)
    {
      head = ptr;
      temp = ptr;
    }
    else
    {
      temp->next = ptr;
      ptr->previous = temp;
      temp = ptr;
    }
  }
  display();
}
void display()
{ // to display//
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    printf("the printed existing linked list was\n");
    temp = head;
    while (temp != NULL)
    {
      printf("%d", temp->data);
      temp = temp->next;
    }
  }
}
void insert_bigining()
{
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  // to insert at biginning//
  else
  {
    printf("the new element to be entered at ther bigining is");
    printf("\n");
    new = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &new->data);
    new->next = head;
    head->previous = new;
    head = new;
    display();
  }
}
void insert_end()
{
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    // to inser at the end//
    temp = head;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    b = (struct node *)malloc(sizeof(struct node));
    printf("enter the next element");
    scanf("%d", &b->data);
    temp->next = b;
    b->previous = temp;
    b->next = NULL;
    display();
  }
}
void insert_pos()
{

  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    int pos;
    printf("enter the position of the element ot be printed\n");
    scanf("%d", &pos);
    temp = head;
    if (pos == 1)
    {
      new = (struct node *)malloc(sizeof(struct node));
      printf("enter a new element");
      scanf("%d", &new->data);
      new->next = head;
      head->previous = new;
      head = new;
      display();
    }
    for (int j = 1; j < pos - 1; j++)
    {
      temp = temp->next;
    }
    new = (struct node *)malloc(sizeof(struct node));
    printf("enter a new element");
    scanf("%d", &new->data);
    new->next = temp->next;
    temp->next = new;
    new->previous = temp;
    display();
  }
}
void delelte_bigining()
{
  // to delelte at the biginning//
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    head = head->next;
    head->previous = NULL;
    display();
  }
}
void delelte_end()
{
  // to delelte at the end//
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    // to inser at the end//
    temp = head;
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = NULL;

    display();
  }
}
void delete_pos()
{
  if (head == NULL)
  {
    printf("you need to first enter the list first\n");
    create();
  }
  else
  {
    // to DELETE AT any position//
    int pos;
    printf("enter the position of the element to be delelted\n");
    scanf("%d", &pos);
    temp = head;
    for (int j = 1; j < pos - 1; j++)
    {
      temp = temp->next;
    }
    no = temp->next->next;
    temp->next = no;

    display();
  }
}
