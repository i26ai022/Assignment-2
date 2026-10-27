#include <stdio.h>
//bubble sort
int main(){
	int i,j,temp;
	int arr[5];
	
	printf("enter elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
		
	for (i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}
