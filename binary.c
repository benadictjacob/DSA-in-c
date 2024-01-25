#include<stdio.h>
int main(){
 int mid,low,high,n=6,elements;
 int a[6]={1,2,3,4,5,6,};
 for(int i=0;i<6;i++)
  {
  printf(" %d:%d \n",i,a[i]);
  }
printf("enter the elements to be searched \n");
 scanf(" %d",&elements);
 high=n-1;
 low=0;
 mid=(high+low)/2;
 while(low<=high){
   if(a[mid]==elements)
   {
  printf("element is n %dth posiotion",mid); 
  break;  
   }
 else if(a[mid]<elements)
   {
    low=mid+1;
   }
 else if(a[mid]>elements)
   {
    high=mid-1;
    }
 mid=(high+low)/2;
}
 return 0;
}
