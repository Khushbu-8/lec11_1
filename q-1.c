#include<stdio.h>

void main(){
	int n;

	
	printf("Enter Array size :");
	scanf("%d",&n);
	
		int a[n];
		int i;
		int *p;
		
		printf("Enter Array element :\n");
	for(i=0; i<n; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);	
    }
    p=&a;
    printf("square of element is :");
    
    for(i=0; i<n; i++){
    	printf("%d,",*(p+i)* *(p+i));
	}
}
