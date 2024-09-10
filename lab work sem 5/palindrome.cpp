#include<stdio.h>

void palindromeCheck(int n){
	int temp=n;
	int rem=0;
	int sum=0;
	while(temp>0){
		rem=temp%10;
		sum=(sum*10)+rem;
		temp/=10;
	}
	if(sum==n) printf("%d is a palindrome",n);
	else printf("%d is not a palindrome",n);
}

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	palindromeCheck(n);
}
