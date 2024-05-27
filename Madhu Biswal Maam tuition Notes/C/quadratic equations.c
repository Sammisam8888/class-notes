/* Find out all the roots of a quadratic equation by the 
following expression ax^2+bx+c = 0   */
#include <stdio.h>
#include <math.h>
void main(){
	int a,b,c;
	printf("Enter the coefficients of the qudratic quation : ax^2+bx+c=0 \n");
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	printf("Enter the value of c :");
	scanf("%d",&c);
	printf("The equation is : %dx^2+%dx+%d=0",a,b,c);
	if ((pow(b,2)-4*a*c)<0)
		printf("\nThe roors of the equation are unreal");
	else{
	float p=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	float q=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("\nThe roots of the equation are : %f & %f",p,q);
	}
}
