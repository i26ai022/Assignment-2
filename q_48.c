#include <stdio.h>
int main(){
	int arr1[5];
	int arr2[5];
	int temp,i;
	
	printf("Enter Elements of Array 1\n");
	for (i=0;i<5;i++){
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	printf("Enter Elements of Array 2\n");
		for (i=0;i<5;i++){
		scanf("%d",&arr2[i]);
	}
	
	//swap
	printf("Swapped\n");
	for (i=0;i<5;i++){
		
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}	
	
		for (i=0;i<5;i++){
		printf("%d\n",arr1[i]);
	}
	printf("\n");
	
			for (i=0;i<5;i++){
		printf("%d\n",arr2[i]);
	}
}
