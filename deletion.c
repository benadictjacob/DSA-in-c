#include<stdio.h>
int main(){
int n=6,m,o;
  printf("the matrix is");
 int a[6]={1,2,3,4,5,6};
 for(int i=0;i<6;i++)
  {
  printf(" %d:%d \n",i,a[i]);
  }
  printf("enter the index of position to be deleted \n");
  scanf("%d",&o);

 for(int i=o;i<n;i++){
  a[i]=a[i+1];
  }
  printf("the deleted matrix is ");
for(int i=0;i<5;i++)
  {
  printf(" %d:%d \n",i,a[i]);
  }
 return 0;
}

