#include<stdio.h>
void main(){
//to check the insertion sort//
int j,i,n=6;
int a[n];
//enter the elements in an array//
  printf("enter the elements in an array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
//print the elements in an array//
printf("the elements in the array is \n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}
//sorting algorithm//
for(i=1;i<n;i++)
{
  int key =a[i];
  j=i-1;
  while(j>=0 && a[j]>key)
  {
   a[j+1]=a[j];
     j=j-1;
    }
   a[j+1]=key;
}
//to print the sorted aray//
printf("The elements in a sorted  array \n");
for(i=0;i<n;i++)
{
 printf("%d \n",a[i]);
}

}
