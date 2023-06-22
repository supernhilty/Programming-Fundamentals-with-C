#include<stdio.h>
void fibonacci();
int checkDate();
int main(){
	int mode;
	int n;
	int d, m, y;
	do{
		printf("-------------Menu-------------\n");
		printf("1-Print out the first n Fibonacci numbers\n");
		printf("2-Check a date\n");
		printf("3-Quit\n");
		printf("Enter mode: ");
		scanf("%d",&mode);
	}while(mode>3||mode<1);
	switch(mode){
		case 1:
			printf("Enter a number: ");
			scanf("%d",&n);
			fibonacci(n);
			break;
		case 2:
			printf("Input day: ");
			scanf("%d",&d);
			printf("Input month: ");
			scanf("%d",&m);
			printf("Input year: ");
			scanf("%d",&y);
			if(checkDate(d,m,y)){
				printf("valid date");
			}else{
				printf("invalid date");
			}
			break;
		default:
			break;
	}
}
void fibonacci(int n){
	int i;
	int n1=1, n2=2, rs;
	if (n==2) printf("%d\t%d",n1,n2);
	if (n==1) printf("%d",n1);
	if (n>=3){
		printf("%d\t%d\t",n1,n2);
		for(i=3;i<n;i++){
			rs=n1+n2;
			n1=n2;
			n2=rs;
			printf("%d\t",rs);
		}
	}
}
int checkDate(int d, int m, int y){
	int maxd=31;
	if(d<1||d>31||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxd=30;
	else if(m==2){
		if(y%400==0||y%4==0&&y%100!=0) maxd=29;
		else maxd=28;
	}
	return d<maxd;
}

