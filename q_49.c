#include <stdio.h>
//selection sort
int main(){
	int i,j,temp,min;
	int arr[5];
	
	printf("enter elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++){
		min=i;
		
		for(j=i+1;j<5;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		
		if (min!= i){
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	
	for (i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
