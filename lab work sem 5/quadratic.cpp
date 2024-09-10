#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,d;
	float x1,x2;
	printf("Enter coeffcient of x^2:");
	scanf("%d",&a);
	printf("Enter coeffcient of x:");
	scanf("%d",&b);
	printf("Enter constant:");
	scanf("%d",&c);
	
	printf("Entered quadratic equation is: %dx1 + %dx2 + %d\n",a,b,c);
	
	d=(pow(b,2))-(4*a*c);
	if(d>0){
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	}
	else if(d==0) x1=x2=-b/(2*a);
	else printf("As d<0, no real roots!");
	
	printf("Roots of entered quadratic equation are: %f and %f",x1,x2);
}

