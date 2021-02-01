#include<stdio.h>

main(){
	int a = 2, b, c;
	b = a++ + a;// b = 3 + 2 and b = 5 // a = 3
	c = ++a + a; // c = 4 + 4 and c = 8 // a = 4
	//a value incremented by 1 and a becomes 3 
	//And add 'a' value to a 'a' value
	//finally the result value assigning to the 'b' variable
	printf("a = %d, b = %d, c = %d",a,b,c);
	getch();
}
