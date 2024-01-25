#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int n;
int front = -1;
int rear = -1;
int queue[MAX_SIZE];

void enqueue(int x)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, x;

    printf("Enter the maximum size of the queue: ");
    scanf("%d", &n);

    while (1)
    {
        printf("Enter your choice (1-Enqueue, 2-Dequeue, 3-Display, 4-Exit): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to enqueue: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
