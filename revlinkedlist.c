#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *ptr, *temp, *new, *b, *no;
void create();
void exit();
void display();
void reverselist();

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
            reverselist();
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
        if (head == NULL)
        {
            head = ptr;
            temp = ptr;
        }
        else
        {
            temp->next = ptr;
            temp = ptr;
        }
    }
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
void reverselist()
{
    struct node *prev, *future = head, *current = head;
    prev = NULL;
    while (future != 0)
    {
        future = future->next;
        current->next = prev;
        prev = current;
        current = future;
    }
    head = prev;
}