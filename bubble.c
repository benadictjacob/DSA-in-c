//to do bubble sort//
#include<stdio.h>
void main(){
int i,n,j,swap;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the elements in an array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf(" the elements in an array \n");
for(i=0;i<n;i++)
{
 printf("%d \n",a[i]);
}
//sorting loops//
for(i=0;i<n-1;i++)
{
  for(j=0;j<n-i-1;j++)
 {
  if(a[j]>a[j+1])
 {
    swap=a[j];
    a[j]=a[j+1];
    a[j+1]=swap;
   }
  }
}
//to print the elements in the array//
printf("The elements in an array \n");
for(i=0;i<n;i++)
{
 printf("%d",a[i]);
}


}
