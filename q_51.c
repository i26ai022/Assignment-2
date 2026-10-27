#include <stdio.h>
//reverse array
int main(){
	int n,i;
	int arr[n];
	printf("enter no of elements and elements");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	//reverse
	printf("reversed\n");
	for (i = n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
}
