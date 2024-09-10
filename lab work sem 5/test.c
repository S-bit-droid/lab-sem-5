#include<stdio.h>

#define max 5

int stack[max],top=-1;

void push(int value){
	if(top==max-1){
		printf("Stack Overflow! Cannot push value %d\n",value);
	}
	else{
		top++;
		stack[top]=value;
		printf("Element pushed in stack: %d\n",value);
	}
}

void pop(){
	if(top==-1){
		printf("Stack Underflow! Cannot pop element\n");
	}
	else{
		printf("Element popped: %d\n",stack[top]);
		top--;
	}
}

void display(){
	if(top==-1){
		printf("Stack Underflow! Cannot pop element\n");
	}
	else{
		printf("Stack elements are:\n");
		for(int i=top;i>=0;i--){
			printf("| %d |\n",stack[i]);
		}
	}
}

int main(){
	push(5);
	push(9);
	push(21);
	push(14);
	display();
}
