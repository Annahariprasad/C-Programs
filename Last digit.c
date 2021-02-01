#include<stdio.h>

main(){
	int r, n;
	printf("Enter a number : ");
	scanf("%d",&n);
	r = n % 10;
	printf("The last digit of a given number is : %d",r);
	getch();
}
