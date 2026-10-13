#include <stdio.h>
int main(){
	int i;
	int arr[10];
	int positive = 0;
	int negative = 0;
	int zero = 0;
	
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0 ;i<10;i++)
	{
	
	if (arr[i]>0){
		positive++;
	}
		else if (arr[i]<0){
		negative++;
	}
		else {
		zero++;
	}
}
    printf("positives : %d\n",positive);	
    printf("negatives: %d\n",negative);
    printf("zero : %d",zero);  
}
