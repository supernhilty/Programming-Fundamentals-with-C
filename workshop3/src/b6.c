#include<stdio.h>
int FiboCheck(int n);
int main(){
	int n;
	do{
		printf("Input number: ");
		scanf("%d",&n);
	}while(n<1);
	if (fiboCheck(n)){
		printf("%d is a Fibonacci element.",n);
	}else{
		printf("%d is not a Fibonacci element.",n);
	}
	return 0;
}
int fiboCheck(int n){
	int n1=1, n2=1, rs;
	int i;
	if(n==1) return 1;
	for(i=1;i<n;i++){
		rs=n1+n2;
		n1=n2;
		n2=rs;
		if(rs==n){
			return 1;
		}
	}
	return 0;
}
