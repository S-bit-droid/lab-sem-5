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
	int target;
	printf("Enter search value:");
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			printf("Element %d found at index %d",target,i);
			break;
		}
	}
}
