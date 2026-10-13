#include <stdio.h>
int main(){
	int i;
	int arr[10];
	int oddcount = 0;
	
	printf("print elements of array : \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<10;i++){
		if (arr[i] % 2 != 0){
			oddcount++;
		}
	}
	printf("oddcount :%d",oddcount);
}
