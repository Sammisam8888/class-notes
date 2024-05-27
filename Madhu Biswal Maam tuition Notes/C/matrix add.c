//WAP to enter 2 matrix and find their sum  

#include <stdio.h>
void main(){
	int n,m,i,j;
	printf("Enter number of rows in matrix :");
	scanf("%d",&n);
	printf("Enter number of columns in matrix :");
	scanf("%d",&m);
	int a[n][m],b[n][m],c[n][m]; //matrix declaration
	printf("Enter the elements of the 1st matrix :\n");
	for (i=0;i<n;i++){
		printf("%dth row\n",i+1);
		for(j=0;j<m;j++){
		printf("%d th element : ",j+1);
		scanf("%d",&a[i][j]);}
	}
	printf("Enter the elements of the 2nd matrix :\n");
	for (i=0;i<n;i++){
		printf("%dth row\n",i+1);
		for(j=0;j<m;j++){
		printf("%d th element : ",j+1);
		scanf("%d",&b[i][j]);}
	}
	printf("Matrix A\n");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");}
	printf("\nMatrix B\n");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");}
	printf("\nThe sum of 2 matrices A+B :\n");
	for (i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}
