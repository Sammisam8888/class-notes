#include<stdio.h>
struct student
{
char name[20];
int roll_no;
float marks;
char gender;
long int phone_no;
};
void main()
{
struct student st1 ={"ABC", 4, 79.5, 'M', 5010670};
printf("Name\tRoll No.  Marks      Gender      Phone No.");
printf("\n\n");
printf("\n %s \t %d\t %f\t %c\t %ld", st1. name, st1.roll_no, 
st1.marks,st1.gender, st1.phone_no);

}
