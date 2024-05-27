//WAP to calculate the sum of  n natural numbers using for loop & average


#include <stdio.h>
int main(){
	int n,sum=0;
	printf("Enter the value n upto which sum is to be calculated :"); 
	scanf("%d",&n);
	//sum=(int)(n*(n+1)/2);
	for (int i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("The sum of first %d natural numbers is : %d",n,sum);
	float avg= (float)(sum/n);
	printf("The average of %d numbers is : %f",n,avg);
	return 0;
}
