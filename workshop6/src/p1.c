#include<stdio.h>
int checkISBN();
unsigned long inputISBN();
int main(){
	unsigned long n=inputISBN();
	int check=checkISBN(n);
	if(check==1){
		printf("This is a valid ISBN.\n");
	}else if(check==0){
		printf("This is not a valid ISBN.\n");
	}else{
		printf("Have a Nice Day!\n");
	}
}
int checkISBN(unsigned long n){
	int I[10],C[10];
	int i,j=10,T;
	int checkDi;
	if(n==0) return -1;
	if(n>0){
		checkDi=n%10;
		n/=10;
		for(i=9;i>0;i--){
			I[i]=n%10;
			n=n/10;
		}
		for(i=1;i<10;i++){
			C[i]=I[i]*j;
			j--;
			T+=C[i];
		}
		T+=checkDi;
		if(T%11==0){
			return 1;
		}
		return 0;
	}
}
unsigned long inputISBN(){
	int code;
	printf("ISBN Validator\n====================\nISBN(0 to quit): ");
	scanf("%lu",&code);
	return code;
}

