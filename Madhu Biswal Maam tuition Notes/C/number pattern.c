/*Write a program for the following structure:
01 02 03 04 05
06 07 08 09 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25*/

#include <stdio.h>
void main(){
	int i=1;
	while (i<=25){
		if (i<10)
			printf("%d%d ",0,i);		
		else 
		printf("%d ",i);
		
		if (i%5==0)
			printf("\n");
		i++;
	}
}
