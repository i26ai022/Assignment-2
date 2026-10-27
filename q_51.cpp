#include <stdio.h>
int main(){
	int matrix[3][3];
	int i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int max = matrix[0][0];
	int min = matrix[0][0];
	
		for (i=0;i<3;i++){
	    	for(j=0;j<3;j++){
			if (matrix[i][j] > max){
				max = matrix[i][j];
			}
			if (matrix[i][j] < min){
				min = matrix[i][j];
			}			
		}	
	}
	printf("MAX : %d\n",max);
	printf("MIN : %d",min);
}

