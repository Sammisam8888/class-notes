//wap to find transpose of a matrix

#include <stdio.h>
void main(){
	int n,m,i,j;
	printf("Enter number of rows in matrix :");
	scanf("%d",&n);
	printf("Enter number of columns in matrix :");
	scanf("%d",&m);
	int a[n][m],b[m][n]; //matrix declaration
	printf("Enter the elements of the matrix :\n");
	for (i=0;i<n;i++){
		printf("%dth row\n",i+1);
		for(j=0;j<m;j++){
		printf("%d th element : ",j+1);
		scanf("%d",&a[i][j]);}
	}
	printf("Matrix A :\n");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("\nTranspose of Matrix A :\n");
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
