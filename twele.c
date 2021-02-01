#include<stdio.h>

main(){
	char a[5] = "SREC\0";
	printf("%s\n",a);
	printf("%5s\n",a);
	printf("%6s\n",a);
	printf("%7s\n",a);
	printf("%8s\n",a);
	printf("%7s\n",a);
	printf("%6s\n",a);
    printf("%5s\n",a);
	printf("%s\n",a);
	getch();
}
