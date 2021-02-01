#include<stdio.h>

void main(){
	printf("<-------------Welcome to Insertion Sort----------->\n");
	int a[10],i,j,n;
	printf("Enter number how many values you want to insert into the array : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d] element : ",i);
		scanf("%d",&a[i]);
	}
	printf("Before Sorting : ");
	for(i=0; i<n; i++){
		printf("%d, ",a[i]);
	}
	
	for(i=1; i<n; i++){
	int key = a[i];
	j = i-1;
	for(j=i-1; j>=0; j--){
		if(a[j]>key){
			int temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
		}
	}}
	printf("\nAfter Sorting : ");
	for(i=0; i<n; i++){
		printf("%d, ",a[i]);
	}
}
