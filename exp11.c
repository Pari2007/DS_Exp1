#include<stdio.h>

int flag;
int x;
int n;
int i;
int count = 0;


int main(){
	flag = 0;
	printf("enter the element x");
	scanf("%d", &x);

	
	printf("Enter the size of the array");
    scanf("%d", &n);
	int arr[n];
	
    for(i; i<n; i++){
        printf("Enter element at pos[%d]",i);
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
    	if(x==arr[i]){
    		flag = 1;
    		count++;
    		if(count == 1){
				printf("the first occurence of x is at, %d\n", i);
		}
    		
		}
		
	}

	if(flag ==0){
			printf("X not found\n");
		
	}
	
	printf("the number of occurences of x is %d", count);
	
	
	return 0;
}
