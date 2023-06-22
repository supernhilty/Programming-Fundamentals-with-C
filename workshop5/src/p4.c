#include<stdio.h>
#include<math.h>
int UserChoice();
void deposit();
void quadraticEqu();
int main(){
	int mode=userChoice();
	do{
		switch(mode){
			case 1:
				quadraticEqu();
				break;
			case 2:
				deposit();
				break;
			default:
				printf("Quit");				
		}
		mode=userChoice();
	}while(mode!=3);
	
	return 0;
}
int userChoice(){
	int mode;
		printf("--------Menu--------\n");
		printf("1-Quadratic equation\n");
		printf("2-Bank deposit problem\n");
		printf("3-Quit\n");	
		printf("Your choice: ");
		scanf("%d",&mode);	
	return mode;
}
void deposit(){
	int money, numY;
	double yRate;
	printf("Deposit, d >0: ");
	scanf("%d",&money);
	printf("Yearly rate, r > 0.0 to < 1.0: ");
	scanf("%lf",&yRate);
	printf("Number of year, n>0: ");
	scanf("%d",&numY);
	printf("Amount at the %d(th) year: %.3lf\n",numY, money*pow(1+yRate,numY));
}
void quadraticEqu(){
	float a,b,c;
	float x,x1,x2;
	float denta;
	printf("ax^2+bx+c=0\n");
	fflush(stdin);
	scanf("%f %f %f",&a,&b,&c);
	printf("%.2fx^2+%.2fx+%.2f=0\n",a,b,c);
	if (a==0){
		if(b==0&&c!=0){
			printf("no x satisfied\n");
		}else{
			x=-c/b;
			printf("x=%.3f\n",x);
		}
	}else{
		denta=b*b-4*a*c;
		if(denta<0){
			printf("No of root\n");
		}else if(denta==0){
			printf("The Equation have double root : \n"); 
			printf("X = %0.3f\n", -b / 2 / a );
		}else{
			x1=(-b+sqrt(denta))/(2*a);
			x2=(b+sqrt(denta))/(2*a);
			printf("x1=%.3f\nx2=%.3f\n",x1,x2);	
		}
	}
}

