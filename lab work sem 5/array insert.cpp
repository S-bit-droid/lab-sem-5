#include<stdio.h>

int main(){
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++){
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	int m=n+1;
	
}
