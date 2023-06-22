#include<stdio.h>
double fibo(int n);
int main(){
	int n;
	do{
		printf("Position in Fibonacci: ");
		scanf("%d",&n);
	}while(n<1);
	printf("The %d position in Fibonacci sequence is %.0lf",n,fibo(n));
}
double fibo(int n){
	int n1=1, n2=1, i,rs;
	for(i=3;i<=n;i++){
		rs=n1+n2;
		n1=n2;
		n2=rs;
	}
	return rs;
}

