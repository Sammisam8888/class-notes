#include <stdio.h>
void main(){
	char c;
	printf("Enter a character :");
	scanf("%c",&c);
	((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?printf("%c is a vowel",c):printf("%c is a consonant",c));
	
}


