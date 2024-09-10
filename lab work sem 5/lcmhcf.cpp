#include<stdio.h>

int main(){
	int a,b,min,max,lcm,hcf;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	if(a<b) min=a;
	else min=b;
	
	if(a>b) max=a;
	else max=b;
	
	for(int i=min;i>=1;i--){
		if(a%i==0&&b%i==0){
			hcf=i;
			break;
		}
	}
	printf("hcf is %d\n",hcf);
	
	while(1){
		if(max%a==0&&max%b==0){
			lcm=max;
			break;
		}
		max++;
	}
	printf("lcm is %d",lcm);
}
