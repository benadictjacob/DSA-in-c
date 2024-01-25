#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    struct node *temp, *new;
    for (int i = 0; i <= 5; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter the element to be enteredd ");
        scanf("%d", &new->data);
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
            temp->next = new;
            printf("%d  ||  ", temp->next->data);
            printf("%d    ", head->next->data);
            temp = new;
        }
    }

    // to print the leements //
    printf("the printed elements are");
    temp = head;
    while (temp != NULL)
    {

        printf("%d", temp->data);
        temp = temp->next;
    }

    return 0;
}
