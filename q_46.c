#include <stdio.h>
int main(){
	int i,n;
	printf("Enter n :");
	if (scanf("%d",&n) != 1 || n<2){
		return 1;
	}
	 int arr[n];
	 for (i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 }
	int max=0;
	int smax=0;
	
	 
	 for (i=0; i<n;i++){
	 	if (arr[i]>max){
	 		smax=max;
	 		max=arr[i];
		 }
		 else if (arr[i]>smax && arr[i]<max){
		 	smax=arr[i];
		 }
	 }
	 printf("max %d :",max);
	 printf("smax %d :",smax);
}
