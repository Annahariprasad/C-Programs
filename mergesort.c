#include<stdio.h>
#include<stdlib.h>

void main(){
	int a[10], n, i;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	printf("Elements are : ");
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	mergeSort(a[10],0,n);
}

void mergeSort(int a[10],int lb,int ub){
	if(lb<ub){
		int mid = (lb+ub)/2;
		mergeSort(a[10],lb,mid);
		mergeSort(a[10],mid+1,ub);
		merge(a[10],lb,mid,ub);
	}
}

void merge(int a[10],int lb,int mid,int ub){
	int b[10], i = lb , j = mid+1 , k = lb;
	while(i<=mid && j <= ub){
		if(a[i]<a[j]){
			b[k] = a[i];
			i++; k++;
		} else {
			b[k] = a[j];
			j++; k++;
		}
	}
	if(i>mid){
		while(j<=ub){
			b[k] = a[j];
			j++; k++;
		} } else { 
		while(i<=mid){
			b[k] = a[i];
			i++; k++;
		}
		}
	for(k=0; k<=ub; k++) {
		a[k] = b[k];
	} 
	for(k=0; k<ub; k++){
		printf("%d",a[k]);
	}
}
