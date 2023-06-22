#include<stdio.h>
#include<math.h>
int checkPrime(int n);
int main(){
	int n,i;
	do{
		printf("Enter a number: ");
		scanf("%d",&n);
	}while(n<2);
	for(i=2;i<=n;i++){
		if(checkPrime(i)==1){
		printf("%d ",i);
		}
	}
}
int checkPrime(int n){
	int m = sqrt(n);
    int i; 
     	if (n < 2) return 0; 
     	for ( i =2 ; i <= m; i++) 
         	if (n % i == 0) return 0;
    return 1; 
}
