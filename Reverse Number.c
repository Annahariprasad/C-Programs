#include<stdio.h>

main(){
	int rev = 0, n, r;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	printf("\n Reverse of a given number is : %d", rev);
	getch();
}
