#include<stdio.h>
int sumDi();
int main(){
	int sum,n;
	do{
		printf("Enter a number: ");
		scanf("%d",&n);
		printf("Sum of %d digits: %d\n",n,sumDi(n));
	}while(n>=0);
}
int sumDi(n){
	int rm, sum;
	do{
		rm=n%10;
		n=n/10;
		sum+=rm;
	}while(n>0);
	return sum;
}
