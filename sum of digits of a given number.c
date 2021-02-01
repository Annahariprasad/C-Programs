#include<stdio.h>

main(){
	int r, sum = 0, n;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		r = n % 10;
		sum = sum + r;
		n = n / 10;
	}
	printf("\n Sum of digits of given number is : %d", sum);
	getch();
}
