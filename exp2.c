#include<stdio.h>
#include<stdlib.h>

int max = 5;
int val;
int choice;
int top = -1;
int i;
int stack[5];

int push();
int pop();
int peek();
int display();

int main(){

	while(1){	
	printf("Stack Implementation Using Array Enter (1) to (5) for operations,Enter \n(1) Push an element, \n(2) Pop an element, \n(3) Peek the stack \n(4) Display the contents of the stack\n (5) Exit the program\n Your Choice: ");
	scanf("%d", &choice);

	
	switch(choice){
		case 1 :
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid Choice\n\n");
	}
}


	
	return 0;
}

int push(){

	if(top == max-1){
		printf("Stack Overflow\n\n");
	}
	else{
		printf("Enter the element to be pushed: ");
		scanf("%d", &val);
		
		top++;
		stack[top] = val;	
		printf("Element pushed is %d\n\n", stack[top]);
	}
	
}

int pop(){

	if(top == -1){
		printf("Stack Underflow\n\n");
	}
	else{
	printf("The element popped is %d\n\n", stack[top]);
	top--;	
	}
}

int peek(){

	if(top == -1){
		printf("Stack is empty\n\n");
	}
	else{
		printf("The peeked element is %d\n\n", stack[top]);
	}
}

int display(){

	if(top == -1){
		printf("Stack is empty\n");
	}
	else{
		for(i = top; i>=0;i--){
			printf("|_%d _|\n", stack[i]);
		}
	}
}
