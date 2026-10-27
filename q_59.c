#include <stdio.h>
// linear search
int main(){
	int n,occ_elem,i,count = 0;
	int arr[n];
	printf("enter no of elements and elements");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter  element");
    scanf("%d",&occ_elem);
	
		for (i=0;i<n;i++){
		if (arr[i] == occ_elem){
         count++;
		}
		
		printf("The element %d occurs %d times",occ_elem,count);
