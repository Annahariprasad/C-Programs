#include<stdio.h>

main(){
	int m = 10; // m value is 10
	int n, n1; 
	n = ++m; // n value is 11 and m value is 11
	n1 = m++; // n1 value is 11 and m value is 12
	n--; // n value is 10
	--n1; // n1 value is 10
	n -= n1; // n = 10 - 10 = 0 and n value is 10
	printf(" n value is : %d",n); //print the n value 
	getch();
}
