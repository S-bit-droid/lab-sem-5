#include<stdio.h>

int main(){
	int a[]={2,4,7,9};
	int b[]={1,3,5,6,8};
	
	int x=sizeof(a)/sizeof(a[0]);
	int y=sizeof(b)/sizeof(b[0]);
	int z=x+y;
	
	int c[z];
	
	int l=x-1;
	int m=y-1;
	int n=z-1;
	
	while(l>=0 && m>=0){
	if(a[l]>b[m]){
		c[n]=a[l];
		n--;
		l--;
	}
	else if(a[l]<b[m]){
		c[n]=b[m];
		n--;
		m--;
	}
	else{
		c[n]=a[l];
		n--;
		l--;
	}
	}
	
	while(l>=0){
		c[n]=a[l];
		n--;
		l--;
	}
	
	while(m>=0){
		c[n]=b[m];
		n--;
		m--;
	}
	for(int i=0;i<z;i++){
		printf("%d\t",c[i]);
	}
}
