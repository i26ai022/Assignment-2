#include <stdio.h>
int main(){
	int matrix1[3][3];
	int matrix2[3][3];	
	int matrix3[3][3];
	int i,j;
	printf("Matrix 1\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("Matrix 2\n");;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}

	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		matrix3[i][j] = matrix1[i][j] + matrix2[i][j];	
		}
	}
	
	    printf("Matrix 3\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",matrix3[i][j]);
		}
		printf("\n");
	}
	
}

