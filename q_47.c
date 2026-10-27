#include <stdio.h>
int main (){
	//array 1
	int i;
	int arr1[5];
	int arr2[5];
	int arr12[5];
	for(i=0;i<5;i++){
		printf("Element arr1: %d\t", i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\n");
	
		for(i=0;i<5;i++){
		printf("Element arr2: %d\t", i+1);
		scanf("%d",&arr2[i]);
		
	}
       	for(i=0;i<5;i++){
		printf("Element arr12: %d%d\t",i+1, arr1[i]+arr2[i]);
		
	
	}
	
}
