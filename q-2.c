#include<stdio.h>

void main(){
	
	 int x,y,z;
 int *p;
 int *q;
 printf("Before swapping:\n");
 
 printf("Enter value of X :");
 scanf("%d",&x);

 printf("Enter value of Y :");
 scanf("%d",&y);
   
   p=&x;
   q=&y;
   z=*p;
   *q=z;
   *p=*q;
   
   printf("After swapping:\n");
   printf("X : %d\n",*p);
   printf("Y : %d\n",*q);
}
