#include<stdio.h>
void minMaxDigit();
int main(){
	int n;
	do{
		printf("Enter number: ");
		scanf("%d",&n);
	}while(n<0);
	minMaxDigit(n);
	return 0;
}
void minMaxDigit(int n){
	int min=0, max=0;
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
