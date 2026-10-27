#include <stdio.h>
int main(){
	int matrix[3][3];
	int i,j;
	int sum = 0;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix[i][j]);
		}
	}

	
		for (i=0;i<3;i++){
	    	for(j=0;j<3;j++){
			sum += matrix[i][j];
		}	
	}
          printf("SUM :%d",sum);
}

