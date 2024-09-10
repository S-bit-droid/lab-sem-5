#include <stdio.h>
#include <stdlib.h>

int main(){
	int m=3,n=3;
	int a[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
	int b[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
	int sum[m][n];
	for(int r=0;r<m;r++){
		for (int c=0;c<n;c++){
			sum[r][c]=a[r][c]+b[r][c];
		}
	}
	for(int r=0;r<m;r++){
		for (int c=0;c<n;c++){
			printf("| %d |",sum[r][c]);
		}
		
		printf("\n");
	}
}
