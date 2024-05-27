#include<stdio.h>
int factorial(int x){
int fact=1,i;
for(i=2;i<=x;i++){
fact*=i;
}
return fact;
}
int combination(int n,int r){
int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main(){
int i,j,n,k;
printf("Enter rows : ");
scanf("%d",&n);
n-=1;
for(i=0;i<=n;i++){
for(j=1;j<=n-i+1;j++){
printf(" ");
}
for(k=0;k<=i;k++){
int ick=combination(i,k);
printf("%2d",ick);
}
printf("\n");
}
 return 0;
}
