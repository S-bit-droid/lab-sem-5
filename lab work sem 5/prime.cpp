 #include<stdio.h>
 
 int main(){
 	int l,u;
 	printf("enter lower number:");
 	scanf("%d",&l);
 	printf("enter upper number:");
 	scanf("%d",&u);
 	for(int i=l;i<=u;i++){
 		int count=0;
 		for(int j=1;j<=i;j++){
 			if(i%j==0) count++;
		 }
		 if(count==2) printf("%d\t",i);
		 	 }
 }
