#include<stdio.h>
#include<math.h>
int checkPrime();
void minMaxDi();
int inputNum();
int main(){
	int mode,n;
	do{
		printf("-------------Menu-------------\n");
		printf("1-Process primes\n");
		printf("2-Print min, max digit in an integer\n");
		printf("3-Quit\n");
		printf("Select an peration: ");
		scanf("%d",&mode);
		n=inputNum(n);
		switch(mode){
			case 1:
				if(checkPrime(n)){
					printf("%d is a prime",n);
				}else{
					printf("%d is not a prime",n);
				}
				break;
			case 2:	
				minMaxDi(n);
				break;	
			default:
				break;		
		}		
	}while(mode>3||mode<1);
	return 0;
}
int inputNum(int n){
	printf("Enter a number: ");
	scanf("%d",&n);
	return n;
}
void minMaxDi(int n){
	int min, max;
	int remainder;
	remainder=n%10;
	n=n/10;
	max=remainder;
	min=remainder;
	do{
		remainder=n%10;
		n=n/10;
		if(remainder>max) max=remainder;
		if(remainder<min) min=remainder;
	}while(n>0);
	printf("Max digit: %d\nMin digit: %d",max,min);
}
int checkPrime(int n){
	int m = sqrt(n);
    int i; 
     	if (n < 2) return 0; 
     	for ( i =2 ; i <= m; i++) 
         	if (n % i == 0) return 0;
    return 1; 
}


