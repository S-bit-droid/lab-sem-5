#include<stdio.h>
#include<math.h>

int main(){
	float p,r,t;
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("Enter rate:");
	scanf("%f",&r);
	printf("Enter time period:");
	scanf("%f",&t);
	
	float siAmount=(p*r*t)/100;
	
	float ciAmount=p*pow((1+(r/100)),t);
	
	printf("simple interest=%f\n",siAmount);
	printf("coumpound interest=%f",ciAmount-p);
}
