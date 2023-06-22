#include<stdio.h>
int gcd();
int lcm();
int main(){
	int a,b;
	do{
		printf("Input 2 numbers:\n");
		scanf("%d\n%d",&a,&b);
	}while(a<=0||b<=0);
	printf("Greatest common divisor: %d\nLeast common multiple: %d",gcd(a,b),lcm(a,b));
}
int gcd(int a, int b){
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int lcm(int a, int b){
	return a*b/gcd(a,b);
}

