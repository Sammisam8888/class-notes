/*An Adam number is a number for which the square of its 
reverse is equal to the reverse of the square of the number.
12^2 = 144  
reverse(12) = 21  
reverse(144) = 441  
(21)^2 = 441 */

#include <stdio.h>
void main(){
	int a,b=0;
	printf("Enter a number :");
	scanf("%d",&a);
	int c=a*a,m=0,e=a;
	while(c!=0){
		m=m*10+c%10;
		c/=10;
	}
	while (a!=0){
		b=b*10+a%10;
		a/=10;
	}
	int k=b*b;
	if (k==m)
		printf("%d is an adam number ",e);
	else 
		printf("%d is not an adam number",e);
	
	
}
