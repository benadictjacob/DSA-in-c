#include<stdio.h>
int main(){
int n=6,m,o;
printf("the matrix s:");
 int a[6]={1,2,3,4,5};
 for(int i=0;i<5;i++)
  {
  printf(" %d:%d \n",i,a[i]);
  }
 printf("enter the element to be inserted ");
 scanf("%d",&m);
 printf("enter the position   ");
 scanf("%d",&o);
 for(int i=n-1;i>o;i--){
  a[i]=a[i-1];
  }
  a[o]=m;
 printf("the inserted matrix is");
for(int i=0;i<6;i++)
  {
  printf(" %d:%d \n",i,a[i]);
  }
 return 0;
}
