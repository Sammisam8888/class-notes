//Find out the maximum and minimum value in a mxn matrix?

#include <stdio.h>
void main()
{
	int m,n;
    int i,j, k;
    printf("Enter the number of rows of matrix :");
    scanf("%d",&m);
    printf("Enter the number of columns of matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the matrix details :%dx%d\n",m,n);
    for(i=0;i<m;i++){
		printf("Enter details of %dth row :\n",i+1);
	    for(j=0;j<n;j++){
	        printf("Enter the %dth element :",j+1);
	        scanf("%d", &a[i][j]);
	    }
	}
	int max=a[0][0],min=a[0][0];
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			if (a[i][j]>max)
				max=a[i][j];
			if (a[i][j]<min)
				min=a[i][j];
		}
	}
    printf("The maximum value in the matrix is : %d",max);
    printf("\nThe minimum value in the matrix is : %d",min);
}
