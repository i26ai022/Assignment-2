#include <stdio.h>
int main(){
	int i;
	int arr[10];
	int sum = 0;
	
	printf("print elements of array : \n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<10;i++){
		sum+=arr[i];
	}
	printf("SUM :%d",sum);
}
