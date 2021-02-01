#include<stdio.h>

void main(){
	int a[10], n, i, j;
	printf("<---Welcome to Selection Sort--->\n");
	printf("Enter how many numbers you want in the array : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Enter a[%d] element : ",i);
		scanf("%d",&a[i]);
	}
	printf("Before Sorting : ");
	for(i=0; i<n; i++){
		printf("%d, ",a[i]);
	}
	for(i=0; i<n-1; i++){  
//here we comparing the values with the index value
		int min = i;		
//here we assign the 1st index value with the minimum named variable
		for(j=i+1; j<n; j++){ 
//next we compare the elements from second index value to last index value
			if(a[min]<a[j]){ 
				min = j; 
			} else{
			int temp = a[j]; 
			a[j] = a[min];
			a[min] = temp;
		} 
		}
	}
	printf("\nAfter Sorting : ");
	for(i=0; i<n; i++){
		printf("%d, ",a[i]);
	}
}
