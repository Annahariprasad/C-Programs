#include<stdio.h>

main(){
	int rev = 0, n, r;
	printf("Enter a number : ");
	scanf("%d",&n);
	int num = n;
	while(n!=0){
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	if (rev == num){
		printf("\n %d IS PALINDROME NUMBER",num);
	} else {
		printf("\n %d IS NOT PALINDROME NUMBER",num);
	}
}
