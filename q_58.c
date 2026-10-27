#include <stdio.h>
// linear search
int main(){
	int n,search_elem,i,flag = 0;
	int arr[n];
	printf("enter no of elements and elements");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter search element");
    scanf("%d",&search_elem);
	
		for (i=0;i<n;i++){
		if (arr[i] == search_elem){
			flag=1;
			break;
		}
		
	
	}
		if (flag == 1){
		printf("Element %d found",search_elem);	
		}
		else{
		printf("Element %d not found",search_elem);		
		}	
	}
		
