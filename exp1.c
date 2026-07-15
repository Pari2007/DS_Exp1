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
