#include<stdio.h>
double factorial();
int main(){
	int n;
	do{
		printf("Input positive number: ");
		scanf("%d",&n);
	}while(n<0);
	printf("The factorial of %d is %.0f",n,factorial(n));
}
double factorial(int n){
	double p=1;
	int i;
	for(i=2;i<=n;i++){
		p*=i;
	}
	return p;
}

