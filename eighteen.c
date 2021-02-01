#include<stdio.h>

main(){
	int a = 2, b;
	b = ++a + --a + a++ + ++a;
	printf("a = %d b = %d",a,b);
	getch();
}
