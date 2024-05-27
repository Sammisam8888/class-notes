/*Write a program to calculate salary of an employee given his basic pay (to
be entered by the user), HRA = 10% of the basic pay, TA = 5% of basic pay.
Define HRA and TA as constants and use them to calculate the salary of the
employee?  */


#include <stdio.h>
#define hra 0.1
#define ta 0.05

void main(){
	int bp;
	float sal,hrap,tap;
	printf("Enter the basic pay of the employee :");
	scanf("%d",&bp);
	hrap=hra*bp;
	tap=ta*bp;
	sal = bp+hrap+tap;
	printf("The total salary of the employee is : %f",sal);
}
