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
	
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	
	printf("Maximum=%d\n",max);
	printf("Minimum=%d",min);
}
