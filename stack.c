#include <stdio.h>
int top = -1, arr[5];
void push(int a)
{
    if (top == 5)
        printf("stack over flow");
    else
    {
        top = top + 1;
        arr[top] = a;
    }
}
void pop()
{
    if (top == -1)
        printf("underflow");
    else
    {
        top = top - 1;
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

void main()

{
    push(50);
    push(60);
    pop();
    display();
}