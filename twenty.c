#include<stdio.h>

main(){
	int a = 4, b = 5;
	a = b++ + b--;
	b = ++a + --a + ++a;
	printf("a = %d b = %d",a,b);
	getch();
}
