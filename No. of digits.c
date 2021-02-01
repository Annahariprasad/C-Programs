#include<stdio.h>

void main(){
	int r, n, count = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		count++;
		n = n / 10;
	}
	printf("\n The number of digits in a number is : %d",count);
}
