#include <stdio.h>
void main()
{
   int n, count = 0;
   printf("enter element to be seareched in an array\n");
   scanf("%d", &n);
   int a[6] = {1, 2, 3, 4, 5, 6};
   for (int i = 0; i < 6; i++)
   {
      printf(" %d:%d \n", i, a[i]);
   }
   // now perform the sortting//
   for (int i = 0; i < 6; i++)
   {
      if (a[i] == n)
      {
         printf("the element is in %d th position", i);
         count++;
         break;
      }
   }
   if (count == 0)
      printf("element not found");
}
