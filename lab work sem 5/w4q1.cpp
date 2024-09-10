#include <stdio.h>
int min(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		if (arr[i]<res){
			res = arr[i];
		}
	}
	return res;	
}

int max(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		if (arr[i]>res){
			res = arr[i];
		}
	}
	return res;	
}

int sum(int arr[],int size){
	int res = arr[0];
	for (int i=1;i<size;i++){
		res+=arr[i];
	}
	return res;	
}

float avg(int arr[],int size){
	return (float)sum(arr,size)/size;
}

int main(){
	int n;
	int arr[]={1,2,3,4,5,6};
	n=6;
	printf("min:%d\nmax:%d\nsum:%d\naverage:%f",min(arr,n),max(arr,n),sum(arr,n),avg(arr,n));
}
