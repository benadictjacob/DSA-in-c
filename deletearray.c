// to impliment delletion in the array //
#include <stdio.h>
int main()
{
    int array[10], n, s;
    printf("enter elements to be entered");
    for (int i = 0; i <= 10; i++)
    {
        scanf(" %d", &array[i]);
    }
    // to delelte an element //
    printf("enter the position to be entered");
    scanf("%d", &s);
    for (int i = s - 1; i <= 10; i++)
    {
        array[i] = array[i + 1];
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("%d", array[i]);
    }

    return 0;
}