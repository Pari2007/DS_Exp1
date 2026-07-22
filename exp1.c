//Method 1

#include<stdio.h>
int n;
int i,j,k;
int max, count;
int x;
int main(){
	
    printf("Enter the size of the array");
    scanf("%d", &n);
	int arr[n];
    for(i; i<n; i++){
        printf("Enter element at pos[%d]",i);
        scanf("%d",&arr[i]);
    }
    
    int x = arr[0];
    
    for(j=0;j<n;j++){
    	count = 0;
    	for(k=0;k<n;k++){
    		if(arr[k]==arr[j]){
    			count++;
			}
			if(count>max){
				max = count;
				x = arr[j];
				if(count==1){
					printf("The position at which the element gets repeated for the first time is %d\n",j);
				}
			}
		}
	}
	
	printf("The number of repeated occurrences of x (%d) is %d",x,max);
    
    
    
    return 0;
}

//Method 2

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
